// Program name: clock.js
// Description: This program displays the current date and time in a specific format.

function updateClock() {
    const now = new Date();
  
    const options = { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' };

    // "undefined" locale means the default locale of the browser
    const dateStr = now.toLocaleDateString(undefined, options);
  
    const timeStr = now.toLocaleTimeString();
  
    document.getElementById('date').textContent = dateStr;
    document.getElementById('time').textContent = timeStr;
  }
  
  // Initial call to display the clock immediately
  updateClock();

  // Update the clock every second
  setInterval(updateClock, 1000);