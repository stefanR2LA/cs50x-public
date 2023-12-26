//script.js
//Automatic Slideshow (3 seconds change)
// Slideshow
var myIndex = 0;
carousel();

function carousel() {
  var i;
  var x = document.getElementsByClassName("mySlides");
  for (i = 0; i < x.length; i++) {
    x[i].style.display = "none";
  }
  myIndex++;
  if (myIndex > x.length) {
    myIndex = 1;
  }
  x[myIndex - 1].style.display = "block";
  setTimeout(carousel, 3000);
}

// Modal
document.addEventListener("DOMContentLoaded", function () {
  var modal = document.getElementById("myModal");
  var modalContent = document.getElementById("modalContent");

  modal.style.display = "flex";

  modalContent.innerHTML = "<p>Welcome to my Coding Journey, where I will show you how I made a slideshow!</p><button onclick='closeModal()' style='margin: 0 auto;'>Close</button>";
});

function closeModal() {
  var modal = document.getElementById("myModal");
  modal.style.display = "none";
}

//Button to show coding content
document.addEventListener('DOMContentLoaded', function(){
  let buttonCode = document.getElementById('buttonCode');

  buttonCode.addEventListener('click', function(){
      document.getElementById('showCode').innerHTML = "<p>Initializing a variable <code>'myIndex'</code> and calling the <code>carousel</code> function.</p> <p>Defining the <code>carousel</code> function, retrieving elements with the class <code>'mySlides'</code> we select all elements and store them in variable <code>'x'</code>.</p> <p>The <code>'for'</code> loop iterates through all the elements with the class <code>'mySlides'</code> and sets their display property to <code>'none'</code>, effectively hiding them.</p> <p>Increments the variable <code>'myIndex'</code> to move to the next slide.</p> <p>Checking if the end of slides is reached, and resets when necessary(when <code>'myIndex'</code> exceeds the total number of slides).</p> <p>Displays the current slide by setting its <code>display</code> property to <code>'block'</code>.</p> <p>Set a timeout to call the <code>carousel</code> function after 3000 milliseconds (3 seconds).</p>";
  });
});
