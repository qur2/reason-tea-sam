open Tea_cmd;

open Type;

open View;

let controlState = (model) =>
  switch (model) {
  | {started: false, launched: false, aborted: false} => Ready
  | {started: true, launched: false, aborted: true} => Aborted
  | {started: true, launched: false, aborted: false} => Counting
  | {started: true, launched: true, aborted: false} when model.counter == 0 => Launched
  | _ => Unresolved
  };

let representation = (model) =>
  switch (controlState(model)) {
  | Ready => ready(model)
  | Counting => counting(model)
  | Aborted => aborted(model)
  | Launched => launched(model)
  | Unresolved => unresolved(model)
  };

let nextAction = (model) =>
  switch (controlState(model)) {
  | Counting when model.counter > 0 => (model, Tea_time.delay(1000.0, Decrement))
  | Counting when model.counter == 0 => (model, msg(Launch))
  | _ => (model, none)
  };
