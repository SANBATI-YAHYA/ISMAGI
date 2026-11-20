using System;

namespace ReseauSocial
{
    // 1. La classe Utilisateur
    public class Utilisateur
    {
        public string NomUtilisateur { get; set; }
        public string Email { get; set; }

        // Constructeur
        public Utilisateur(string nomUtilisateur, string email)
        {
            NomUtilisateur = nomUtilisateur;
            Email = email;
        }

        // Méthode afficherProfil
        public virtual void AfficherProfil()
        {
            Console.WriteLine($"Utilisateur : {NomUtilisateur}, Email : {Email}");
        }

        public static void Main()
        {
            var utilisateur = new Utilisateur("Sanba", "email@example.com");
            utilisateur.AfficherProfil();
        }
    }
}
