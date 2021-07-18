console.log("This is tut 47");

let regex=/harry/;

//lets look into some metacharacters symbols 
regex=/^harrdc/;  // ^ means expression will match if string starts with

regex=/ry$/;      // $ means expression will match if "string ends with"

regex=/h.rry/;    //. matches any one character

regex=/h*rry/;    //matches any zero or more character

regex=/ha?rryi?/;  // ? after the character means that character is optional

regex=/h\*rry/    // escaping the metacharacters 


const str="harry is a good boy and harry website is code with harry";

console.log(regex.exec(str));

if(regex.test(str)){
    console.log(`The string ${str} matches the expression ${regex.source}`)
}
else{
    console.log(`The string ${str} does not match the expression ${regex.source}`)

}