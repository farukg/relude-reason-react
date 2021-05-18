[@react.component]
let make = () => {
  let url = RescriptReactRouter.useUrl();

  switch (url.path) {
  | [] => <AnimalListView />

  | ["create"] => <div> {React.string("Animal create view")} </div>

  | _ => <div> {React.string("Invalid URL")} </div>
  };
};