console.log("Welcome to notes app.This is app.js");
showNotes();

// if user adds a note ,add it to the localstorage
let addBtn=document.getElementById('addBtn');
addBtn.addEventListener("click",function(e)
{
    let addTxt=document.getElementById('addTxt');
    let notes=localStorage.getItem('notes');

     if(notes==null)
     {
         notesObj=[];
     }
     else{
         notesObj=JSON.parse(notes);
     }
     notesObj.push(addTxt.value);
     localStorage.setItem("notes",JSON.stringify(notesObj));
    //  console.log(notesObj);
     addTxt.value="";
     showNotes();
     
});
// function to show element from localstorage
function showNotes()
{
    let notes =localStorage.getItem("notes");
    if(notes==null)
     {
         notesObj=[];
     }
     else{
         notesObj=JSON.parse(notes);
     }
     let html="";
    notesObj.forEach(function(element,index){
        html+=`<div class="noteCard my-2  mx-2 card" style="width: 18rem;">
        <div class="card-body">
            <h5 class="card-title">Note ${index+1}</h5>
            <p class="card-text">${element}</p>
            <button id="${index}" onclick="deleteNote(this.id)" class="btn btn-primary">Delete node</button>
        </div>
    </div>`;


    });
    let notesElem=document.getElementById('notes');
    if(notesObj.length!=0)
    {
        notesElem.innerHTML=html;
    }
     else{

        notesElem.innerHTML=`Nothing to show! use "Add a Note" section above to add notes.`
     }

}
// function to delete a note
function deleteNote(index){
    // console.log("I am deleting",index);
    let notes=localStorage.getItem('notes');

    if(notes==null)
    {
        notesObj=[];
    }
    else{
        notesObj=JSON.parse(notes);
    }

    notesObj.splice(index,1);
    localStorage.setItem("notes",JSON.stringify(notesObj));
    showNotes();


}
let search=document.getElementById('searchTxt');
search.addEventListener("input",function(){
    let inputVal=search.value.toLowerCase
    ();
// console.log("input event fire!",inputVal);

let notesCard=document.getElementsByClassName('noteCard');
Array.from(notesCard).forEach(function(element){
let cardTxt=element.getElementsByTagName("p")[0].innerText;

if(cardTxt.includes(inputVal))
{
    element.style.display="block";
}
else{
    element.style.display="none";
}

// console.log(cardTxt);

})
})

/* further feature
 1.add title 
2.mark a note ads important
3.separate notes by user
*/