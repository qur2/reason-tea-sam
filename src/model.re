open Type;

open State;

let present = (model, proposal) => {
  let state_proposal = (controlState(model), proposal);
  switch state_proposal {
  | (Ready, StartStatus(data)) => {...model, started: data}
  | (Counting, DecrementValue(data)) => {...model, counter: model.counter - data}
  | (Counting, AbortStatus(data)) => {...model, aborted: data}
  | (Counting, LaunchStatus(data)) => {...model, launched: data}
  | (Aborted, ResetProposal(data)) => data
  | _ => model
  }
};
