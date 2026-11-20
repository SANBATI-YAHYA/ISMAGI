
using System;

var etudiant2 = new Etudiant
{
    Nom = "Sanba",
    Age = 20
};

etudiant2.SePresenter();



class Etudiant
{
    public string Nom = string.Empty;
    public int Age;

    public void SePresenter()
    {
        Console.WriteLine($"Salam, ana {Nom}, 3andi {Age} ans.");
    }
}

