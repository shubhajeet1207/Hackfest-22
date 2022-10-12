document.addEventListener('DOMContentLoaded', function() {
    let counter = 0;
    let c = 0;
    const i = setInterval(function() {
      document.querySelector('.loading-page .counter h1').innerHTML = `${c}%`;
      document.querySelector('.loading-page').style.width = `${c}%`;
      counter++;
      c++;
      if(counter == 101) {
        clearInterval(i);
      }
    }, 50);
  })