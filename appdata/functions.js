// Petlja kroz sve zadatke
for (let i = 1; i <= 31; i++) {
    // Otvori modal sa slikom dokaza
    let showProofBtn = document.getElementById('showProofBtn' + i);
    if (showProofBtn) {
        showProofBtn.onclick = function () {
            let modal = document.getElementById('proofModal' + i);
            modal.style.display = "block";
        };
    }

    // Zatvori modal sa slikom dokaza
    let closeProofBtn = document.getElementById('closeProofBtn' + i);
    if (closeProofBtn) {
        closeProofBtn.onclick = function () {
            let modal = document.getElementById('proofModal' + i);
            modal.style.display = "none";
        };
    }


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
};


