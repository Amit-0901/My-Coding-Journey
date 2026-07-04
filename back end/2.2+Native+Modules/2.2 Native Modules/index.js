const fs= require("fs");
// fs.writeFile("messages.txt","hello from nodejs!", (err) =>{
//     if(err) throw err;
//     console.log("the file has been saved!");
// });
fs.readFile("./messages.txt","utf-8",(err,data)=>{
    if(err) throw err;
    console.log(data);
});
//Use:

// import { randomSuperhero } from "superheroes";
// const name = randomSuperhero();

// Instead of:

// import superheroes from "superheroes";
// const name = superheroes.random();
// //