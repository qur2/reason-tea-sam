/* This line opens the Tea.App modules into the current scope for Program access functions and types */

open Tea.App;

open Tea_cmd;

/* These lines open the SAM modules into the current scope for SAM pattern functions and types */
open Type;

open State;

open Action;

open Model;

let initModel = {counter: 10, started: false, launched: false, aborted: false};

let tea_app_init = () => (initModel, none);

let tea_app_update = (model, actionMsg) =>
  propose(actionMsg, initModel) |> present(model) |> nextAction;

/* This is the main function, SAM modules are wired to TEA.
   The Program returned here has a set of callbacks that can easily be called from
   Bucklescript or from javascript for running this main attached to an element,
   or even to pass a message into the event loop.  You can even expose the
   constructors to the messages to javascript via the above [@@bs.deriving {accessors}]
   attribute on the `msg` type or manually, that way even javascript can use it safely. */
let main = standardProgram({
  init: tea_app_init,
  update: tea_app_update,
  view: representation,
  subscriptions: (_m) => Tea_sub.NoSub
});
