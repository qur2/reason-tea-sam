type state = Ready | Counting | Aborted | Launched | Unresolved;

type actionMsg = Start | Decrement | Launch | Abort | Reset;

type model = {counter: int, started: bool, launched: bool, aborted: bool};

type proposal =
  | StartStatus(bool)
  | DecrementValue(int)
  | LaunchStatus(bool)
  | AbortStatus(bool)
  | ResetProposal(model);
