console.log('We are at tut6');
const name='Harry';
const greeting=" Good Morning";
// console.log(name+" "+greeting);
let html="<h1>This is heading</h1>"+
'<p>This is paragraph</p>';
// console.log(html);
html=html.concat(" this"," string");
console.log(html);
// console.log(html.length);
// console.log(html.toLowerCase());
// console.log(html.toUpperCase());
// console.log(html);

// console.log(html[2]);
// console.log(html.indexOf("<"));
// console.log(html.lastIndexOf("<"));
// console.log(html.charAt(3));
// console.log(html.endsWith("string"));
// console.log(html.includes("string"));
// console.log(html.substring(0,6));
// console.log(html.slice(0,6));
// console.log(html.split(">"));

// console.log(html.replace("This","It"));

let fruits1="Orange";
let fruits2="Mango";
let myHtml=`Hello ${name} you like ${fruits1} or ${fruits2} ?
<h1>This is "my"  Heading</h1>
<p>You liked ${fruits2}</p>

`;
// console.log(myHtml);
// document.body.innerHTML=myHtml;