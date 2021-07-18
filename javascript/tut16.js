// console.log("This is tutorial 16");
// let element=document.createElement('li');
// let node=document.createTextNode("I am a created node");
// element.className='element';
// element.id='element';
// element.setAttribute('title','mytitle');
// element.appendChild(node);
// // element.innerText="I am a created element";
// // element.innerHTML="<b>I am a created element</b>";
// console.log(element);
// let ul=document.querySelector("ul.this");
// ul.appendChild(element);
// // console.log(ul);

// let elem2=document.createElement('h1');
// elem2.className='elem2';
// elem2.id='elem2';
// let node2=document.createTextNode('This is a created node text');
// elem2.appendChild(node2);
// element.replaceWith(elem2);
// let myul=document.getElementById('myul');
// myul.replaceChild(element,document.getElementById('fst'));
// myul.removeChild(document.getElementById('liui'));
// let pr=element.getAttribute('title');
//  pr=element.hasAttribute('title');
//  elem2.removeAttribute('id');
//  elem2.setAttribute('title','myelem2title');
// console.log(elem2,pr);
// console.log(myul);

let mheading=document.createElement('h1');



let node=document.createTextNode('Go to codewithHarry');
mheading.appendChild(node);
let head=document.getElementById('heading');
let a=document.getElementById('repl');
a.setAttribute('href',"https://codewithharry.com");
head.replaceWith(mheading);
a.innerHTML="Hf";
console.log(a);
console.log(mheading);


