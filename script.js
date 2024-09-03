document.getElementById("signupForm").addEventListener("submit", function(event) {
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirm-password").value;
    const errorMessage = document.getElementById("error-message");

    if (password !== confirmPassword) {
        event.preventDefault(); // Empêche l'envoi du formulaire
        errorMessage.textContent = "Les mots de passe ne correspondent pas";
        errorMessage.style.color = "red";
        errorMessage.style.marginTop = "10px";
    }
});
