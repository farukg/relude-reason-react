switch (ReactDOM.querySelector("#root")) {
| Some(root) => ReactDOM.render(<Router />, root)
| None => () // do nothing
};