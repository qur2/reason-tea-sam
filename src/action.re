open Type;

let propose = (actionMsg, initData) =>
  switch actionMsg {
  | Start => StartStatus(true)
  | Decrement => DecrementValue(1)
  | Launch => LaunchStatus(true)
  | Abort => AbortStatus(true)
  | Reset => ResetProposal(initData)
  };
