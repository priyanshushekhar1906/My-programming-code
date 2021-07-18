console.log("this is tut25");
// creating a div element
let divElement=document.createElement('div');

divElement.setAttribute('id','elem');
divElement.setAttribute('class','elem');

// Add a text to created element

divElement.setAttribute('style','border:2px solid black; width:300px; height:100px; background-color:red; padding:3px; text-align:center');
// Adding text to create element
let val=localStorage.getItem('text');
let text;
if(val==null)
{
text=document.createTextNode("This is my element.click to edit it");
}
else{
    text=document.createTextNode(val );

}
divElement.appendChild(text);

// grab the main container

let container=document.querySelector('.container');
let first=document.getElementById('first');

// insert the element before element with id first

container.insertBefore(divElement,first);
console.log(divElement,container,first )

// add event listener to the divElem 

divElement.addEventListener('click',function(){
    let noTextAreas=document.getElementsByClassName('textarea').length;
    if(noTextAreas==0){
let html=elem.innerHTML;
divElement.innerHTML=`<textarea id="textarea" class="textarea form-control" id="addTxt" rows="3">${html}</textarea>`;
    }
    // Listen for the blur event  on textarea

    let textarea=document.getElementById('textarea');
    textarea.addEventListener('blur',function(){
    elem.innerHTML=textarea.value;
    localStorage.setItem('text',textarea.value);
    
    
     } )


    

  
  
  
  


});