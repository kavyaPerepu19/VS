let elem = React.createElement("h3",null,"Hello World");
let MyButton = React.createElement("button",{"className":"bg-warning"},"KMITButton");
let inputComponent = React.createElement("input",{"type":"text"},null)

ReactDOM.render([elem,MyButton,inputComponent],document.getElementById("root"));