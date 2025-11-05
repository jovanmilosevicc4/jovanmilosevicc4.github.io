// Uzimanje elemenata
var modal = document.getElementById("proofModal"); // Modal prozor
var btn = document.getElementById("showProofBtn"); // Dugme koje otvara modal
var closeBtn = document.getElementById("closeProofBtn"); // Dugme za zatvaranje modala

// Kada korisnik klikne na dugme, otvara se modal
btn.onclick = function () {
    modal.style.display = "block"; // Prikazuje modal
}

// Kada korisnik klikne na "x", zatvara se modal
closeBtn.onclick = function () {
    modal.style.display = "none"; // Sakriva modal
}

// Kada korisnik klikne bilo gde van modala, takođe se zatvara
window.onclick = function (event) {
    if (event.target == modal) {
        modal.style.display = "none"; // Sakriva modal ako je korisnik kliknuo van njega
    }
}
