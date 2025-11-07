// Loop kroz zadatke 1 do 6
for (let i = 1; i <= 29; i++) {
    // Otvori kod zadatka
    document.getElementById('showTaskBtn' + i).onclick = function () {
        var taskCode = document.getElementById('taskCode' + i);
        taskCode.style.display = (taskCode.style.display === 'none' || taskCode.style.display === '') ? 'block' : 'none';
    };

    // Otvori modal sa slikom dokaza
    document.getElementById('showProofBtn' + i).onclick = function () {
        var modal = document.getElementById('proofModal' + i);
        modal.style.display = "block";
    };

    // Zatvori modal sa slikom dokaza
    document.getElementById('closeProofBtn' + i).onclick = function () {
        var modal = document.getElementById('proofModal' + i);
        modal.style.display = "none";
    };

    // Zatvori modal ako klikneš van njega
    window.onclick = function (event) {
        var modal = document.getElementById('proofModal' + i);
        if (event.target == modal) {
            modal.style.display = "none";
        }
    };
}
