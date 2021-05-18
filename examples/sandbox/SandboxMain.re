switch (ReactDOM.querySelector("#root")) {
| Some(root) => ReactDOM.render(<SandboxApp />, root)
| None => () // do nothing
};