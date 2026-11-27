# Cours de Dénombrement

## 3) Listes avec répétition

### Définition
Soit $E$ un ensemble fini à $n$ éléments et $p \ge 1$ un entier. Une **p-liste** (ou **p-uplet**) d'éléments de $E$ est une suite ordonnée $(x_1, x_2, \dots, x_p)$ où chaque élément $x_i$ appartient à $E$.

* **L'ordre compte** (la place de chaque élément est importante).
* **La répétition est autorisée** (un même élément peut apparaître plusieurs fois).
* On note cet ensemble $E^p = E \times E \times \dots \times E$ ($p$ fois), soit :
  $$E^p = \{(x_1, x_2, \dots, x_p) \mid x_i \in E \text{ pour tout } i \in \{1, \dots, p\}\}$$

### Cardinal
$$\text{Card}(E^p) = \text{Card}(E) \times \text{Card}(E) \times \dots \times \text{Card}(E) = n \times n \times \dots \times n = n^p$$

### Exemple : Code PIN à 4 chiffres (avec répétition)
On veut créer un code PIN de 4 chiffres, de $0$ à $9$, avec répétition autorisée :

* Il y a $n = 10$ chiffres possibles ($0, 1, 2, 3, 4, 5, 6, 7, 8, 9$) et $p = 4$ positions.
* Chaque position possède $10$ possibilités.
* La répétition des chiffres est autorisée et l'ordre est important.
* **Exemples valides :** `1111`, `1234`, `0000`, `5588`.

**Calcul du cardinal :**
$$\text{Card}(E^4) = 10^4 = 10 \times 10 \times 10 \times 10 = 10\,000$$

---

## 4) Listes sans répétition (Arrangements)

### Définition
Soit $E$ un ensemble fini à $n$ éléments (avec $n \ge p$) et $p \ge 1$ un entier. Une **p-liste sans répétition** (ou arrangement de $p$ éléments parmi $n$) est une suite ordonnée $(x_1, x_2, \dots, x_p)$ d'éléments de $E$ **deux à deux distincts**.

* **L'ordre compte**.
* **Il n'y a pas de répétition** (chaque élément ne peut être choisi qu'une seule fois).

### Cardinal (Formule)
On note ce nombre $A_n^p$ :
$$A_n^p = n \times (n - 1) \times (n - 2) \times \dots \times (n - p + 1) = \frac{n!}{(n - p)!}$$

### Exemple : Code PIN à 4 chiffres (sans répétition)
On veut créer un code PIN de 4 chiffres de $0$ à $9$, **sans répétition** :

* $10$ choix pour le premier chiffre.
* $9$ choix pour le deuxième chiffre.
* $8$ choix pour le troisième chiffre.
* $7$ choix pour le quatrième chiffre.

**Calcul du cardinal :**
$$\text{Card} = A_{10}^4 = 10 \times 9 \times 8 \times 7 = 5\,040$$

---

## 5) Permutations

### Définition
Une **permutation** est un arrangement de **tous** les éléments d'un ensemble fini $E$ à $n$ éléments, sans répétition et où l'ordre compte.

### Exemple
Soit $E = \{A, B, C\}$. Toutes les permutations possibles des 3 éléments sont :
* `ABC`
* `ACB`
* `BAC`
* `BCA`
* `CAB`
* `CBA`

Il y a donc **$6$ permutations**.

### Comment calculer ? (Formule)
Pour un ensemble à $n$ éléments :
* $n$ possibilités pour la $1^{\text{re}}$ position.
* $(n - 1)$ possibilités pour la $2^{\text{e}}$ position.
* ...
* $1$ possibilité pour la dernière position.

$$P_n = n! = n \times (n - 1) \times (n - 2) \times \dots \times 2 \times 1$$

*(Note : $n!$ se lit « factorielle $n$ ». Par exemple : $4! = 4 \times 3 \times 2 \times 1 = 24$).*

### Exemple d'utilisation
On veut placer $4$ étudiants sur $4$ chaises différentes. Combien de dispositions sont possibles ?
* Première chaise : $4$ choix.
* Deuxième chaise : $3$ choix.
* Troisième chaise : $2$ choix.
* Quatrième chaise : $1$ choix.

$$P_4 = 4! = 4 \times 3 \times 2 \times 1 = 24 \text{ possibilités}$$

## Ensemble des parties d'un ensemble

### 1. Définition
**Ensemble des parties :** L'ensemble des parties d'un ensemble $E$, noté $\mathcal{P}(E)$, est l'ensemble de tous ses sous-ensembles, y compris l'ensemble vide $\varnothing$ et l'ensemble $E$ lui-même.

---

### 2. Propriété (Cardinal)
Soit $E$ un ensemble fini à $n$ éléments. Le nombre total de sous-ensembles de $E$ est :
$$\text{Card}(\mathcal{P}(E)) = 2^n$$

* $n$ : nombre d'éléments de $E$.
* $2^n$ : nombre total de sous-ensembles de $E$.

---

### 3. Exemple
Soit l'ensemble :
$$E = \{2, 7, 4, 9\}$$

Cet ensemble contient $4$ éléments, donc $n = 4$. Voici tous ses sous-ensembles classés par taille :

1. **Sous-ensemble à $0$ élément :**
   $$\varnothing$$

2. **Sous-ensembles à $1$ élément :**
   $$\{2\}, \; \{7\}, \; \{4\}, \; \{9\}$$

3. **Sous-ensembles à $2$ éléments :**
   $$\{2, 7\}, \; \{2, 4\}, \; \{2, 9\}, \; \{7, 4\}, \; \{7, 9\}, \; \{4, 9\}$$

4. **Sous-ensembles à $3$ éléments :**
   $$\{2, 7, 4\}, \; \{2, 7, 9\}, \; \{2, 4, 9\}, \; \{7, 4, 9\}$$

5. **Sous-ensemble à $4$ éléments :**
   $$\{2, 7, 4, 9\}$$

---

### 4. Calcul du cardinal
$$\text{Card}(\mathcal{P}(E)) = 2^4 = 16$$

## 6 Les combinaisons

### 1. Définition
Une **combinaison** de $p$ éléments parmi $n$ éléments (avec $0 \le p \le n$) est le choix simultané (ou successif sans remise) de $p$ éléments **distincts** d'un ensemble à $n$ éléments, **sans tenir compte de l'ordre**.

* **L'ordre ne compte pas** : choisir $\{A, B\}$ ou $\{B, A\}$ correspond au même sous-ensemble ($\{A, B\} = \{B, A\}$).
* **La répétition est interdite** : chaque élément de l'ensemble ne peut être choisi qu'une seule fois.

---

### 2. Exemple
Soit l'ensemble :
$$E = \{A, B, C\}$$

On veut choisir $2$ éléments parmi $3$ ($n = 3$, $p = 2$). Les combinaisons possibles sont :
$$\{A, B\}, \; \{A, C\}, \; \{B, C\}$$

Il y a donc **$3$ combinaisons** ($\text{Card} = 3$).

**Pourquoi $\{B, A\}$ n'est pas comptée séparément ?**
Parce que dans un ensemble, l'ordre des éléments n'a aucune importance : $\{B, A\}$ représente exactement la même paire que $\{A, B\}$.

---

### 3. La formule (Cardinal)
Le nombre de combinaisons de $p$ éléments parmi $n$, noté $C_n^p$ ou $\binom{n}{p}$, est donné par :
$$C_n^p = \binom{n}{p} = \frac{n!}{p!(n - p)!} = \frac{A_n^p}{p!}$$

* $n$ : nombre total d'éléments de l'ensemble.
* $p$ : nombre d'éléments à choisir.
* $!$ : symbole de la factorielle ($k! = k \times (k-1) \times \dots \times 1$, avec $0! = 1$).

---

### 4. Exemple d'utilisation
Dans une classe de $12$ étudiants, on souhaite former un comité de $3$ délégués (tous ont le même rôle, donc l'ordre ne compte pas et un même étudiant ne peut pas être choisi deux fois). Combien de comités différents peut-on former ?

Ici, $n = 12$ et $p = 3$ :
$$C_{12}^3 = \frac{12!}{3!(12 - 3)!} = \frac{12!}{3! \times 9!} = \frac{12 \times 11 \times 10}{3 \times 2 \times 1} = \frac{1\,320}{6} = 220$$

On peut donc former **$220$ comités différents**.
# Résumé des méthodes de dénombrement

Voici un tableau de synthèse pour vous aider à choisir la bonne méthode :

<br>

![Tableau de synthèse des méthodes de dénombrement](./TABLE%20SYNTRHAS.jpg)

<br>
*Figure 1 : Arbre décisionnel pour le choix de la méthode de dénombrement.*


## Exercice d'application : Dénombrement

*Énoncé : Pour chaque situation, justifier puis calculer.*

---

### 1. Ranger 7 personnes dans une file d'attente
* **Justification :** On place **tous** les éléments ($n = 7$ personnes), l'ordre compte (la place dans la file est importante) et il n'y a pas de répétition (une même personne ne peut pas occuper deux places en même temps). Il s'agit donc d'une **permutation** de $7$ éléments.
* **Calcul du cardinal :**
  $$\text{Card} = P_7 = 7! = 7 \times 6 \times 5 \times 4 \times 3 \times 2 \times 1 = \mathbf{5\,040}$$

---

### 2. Choisir 2 délégués (sans fonction particulière) dans une classe de 30
* **Justification :** On choisit $p = 2$ éléments parmi $n = 30$, l'ordre **ne compte pas** (les deux délégués ont le même rôle) et il n'y a pas de répétition (on ne choisit pas deux fois la même personne). Il s'agit donc d'une **combinaison**.
* **Calcul du cardinal :**
  $$\text{Card} = C_{30}^2 = \binom{30}{2} = \frac{30 \times 29}{2 \times 1} = \mathbf{435}$$

---

### 3. Choisir un délégué et un suppléant dans une classe de 30
* **Justification :** On choisit $p = 2$ éléments parmi $n = 30$, l'ordre **compte** (être délégué est différent d'être suppléant) et il n'y a pas de répétition (une même personne ne peut pas cumuler les deux fonctions). Il s'agit donc d'une **liste sans répétition** (ou arrangement).
* **Calcul du cardinal :**
  $$\text{Card} = A_{30}^2 = 30 \times 29 = \mathbf{870}$$

---

### 4. Lancer un dé 4 fois et noter la suite des résultats
* **Justification :** On effectue $p = 4$ tirages successifs parmi $n = 6$ faces ($\{1, 2, 3, 4, 5, 6\}$), l'ordre **compte** (on note la suite des résultats) et la **répétition est autorisée** (on peut obtenir le même chiffre plusieurs fois). Il s'agit donc d'une **liste avec répétition** ($4$-liste).
* **Calcul du cardinal :**
  $$\text{Card} = 6^4 = 6 \times 6 \times 6 \times 6 = \mathbf{1\,296}$$


  # Chapitre 2 : Notion de probabilité

## Expérience aléatoire

### Définition
Une **expérience aléatoire** est une expérience dont on connaît l'ensemble des issues (résultats) possibles à l'avance, mais dont on ne peut pas prédire avec certitude quel résultat se réalisera avant de l'effectuer.

> **Explication orale :** « Une expérience aléatoire est une expérience où on connaît les résultats possibles, mais on ne sait pas lequel va se réaliser. Par exemple, lorsqu'on lance un dé, on sait qu'on peut obtenir un nombre entre 1 et 6, mais on ne sait pas quel nombre va apparaître. »

### Exemple : Lancer d'un dé cubique équilibré
* On connaît les résultats possibles : $1, 2, 3, 4, 5$ ou $6$.
* Avant le lancer, il est impossible de savoir avec certitude quelle face va sortir.

## Univers des possibles

### Définition
L'**univers** (ou ensemble fondamental), généralement noté $\Omega$, est l'ensemble de toutes les issues (résultats) possibles d'une expérience aléatoire. Chaque élément $\omega \in \Omega$ est appelé une **issue** (ou éventualité).

### Exemples
* **Lancer d'une pièce de monnaie** (pile $\text{P}$, face $\text{F}$) :
  $$\Omega = \{\text{P}, \text{F}\}, \quad \text{Card}(\Omega) = 2$$
* **Lancer d'un dé cubique** :
  $$\Omega = \{1, 2, 3, 4, 5, 6\}, \quad \text{Card}(\Omega) = 6$$

---

## Événement et ensemble des événements

### 1. Événement
Un **événement** $A$ est un sous-ensemble de l'univers $\Omega$ ($A \subset \Omega$). On dit que l'événement $A$ est **réalisé** si l'issue obtenue lors de l'expérience appartient à $A$.

* **Événement élémentaire :** événement composé d'une seule issue (ex. : $\{6\}$).
* **Événement certain :** événement toujours réalisé, égal à l'univers entier $\Omega$ (ex. : « obtenir un entier entre $1$ et $6$ »).
* **Événement impossible :** événement qui ne peut jamais se réaliser, noté $\varnothing$ (ex. : « obtenir $7$ avec un dé cubique »).

**Exemple :** Pour le lancer d'un dé cubique ($\Omega = \{1, 2, 3, 4, 5, 6\}$), soit l'événement $A$ : « obtenir un nombre pair ».
$$A = \{2, 4, 6\}$$

### 2. Ensemble des événements
L'**ensemble des événements** d'une expérience aléatoire d'univers $\Omega$ est l'ensemble de toutes les parties de $\Omega$, noté $\mathcal{P}(\Omega)$.

* Chaque élément de $\mathcal{P}(\Omega)$ est un événement possible.
* Si $\text{Card}(\Omega) = n$, alors le nombre total d'événements est :
  $$\text{Card}(\mathcal{P}(\Omega)) = 2^n$$

**Exemple :** Pour le lancer d'une pièce ($\Omega = \{\text{P}, \text{F}\}$, donc $n = 2$), l'ensemble des événements contient $2^2 = 4$ événements :
$$\mathcal{P}(\Omega) = \big\{\varnothing, \; \{\text{P}\}, \; \{\text{F}\}, \; \{\text{P}, \text{F}\}\big\}$$
## L'ensemble des événements – La tribu

### 1. L'ensemble des événements
L'**ensemble des événements** est une famille de parties de l'univers $\Omega$.

**Exemple :** Lors du lancer d'un dé cubique équilibré, l'univers des possibles est :
$$\Omega = \{1, 2, 3, 4, 5, 6\}$$

Voici quelques exemples d'événements :
* $A = \{2, 4, 6\}$ : obtenir un nombre pair.
* $B = \{1, 3, 5\}$ : obtenir un nombre impair.
* $C = \{6\}$ : obtenir le numéro $6$.

---

### 2. Définition d'une tribu
Une **tribu** (ou $\sigma$-algèbre), notée $\mathcal{A}$, est une famille de parties de $\Omega$ qui vérifie **trois conditions** :

* **Condition 1 : Contient l'univers**
  $$\Omega \in \mathcal{A}$$
  L'univers $\Omega$ doit appartenir à la famille $\mathcal{A}$.

* **Condition 2 : Stabilité par complémentaire**
  $$A \in \mathcal{A} \implies A^c \in \mathcal{A}$$
  Si un événement $A$ appartient à la tribu, alors son événement contraire (complémentaire) $A^c$ appartient également à la tribu.
  * **Exemple :** Si $A = \{2, 4, 6\}$, alors son complémentaire dans $\Omega = \{1, 2, 3, 4, 5, 6\}$ est :
    $$A^c = \{1, 3, 5\}$$

* **Condition 3 : Stabilité par union dénombrable**
  $$A_1, A_2, A_3, \dots \in \mathcal{A} \implies \bigcup_{i=1}^{+\infty} A_i \in \mathcal{A}$$
  L'union dénombrable d'événements appartenant à une tribu appartient également à cette tribu.

---

### 3. Exemple d'une tribu
Soit l'univers :
$$\Omega = \{1, 2, 3, 4, 5\}$$

Considérons la famille :
$$\mathcal{A} = \{\varnothing, \Omega\}$$

Cette famille est une tribu (appelée *tribu grossière*) car elle vérifie les trois conditions :
1. $\Omega \in \mathcal{A}$.
2. **Stabilité par complémentaire :** $\Omega^c = \varnothing \in \mathcal{A}$ et $\varnothing^c = \Omega \in \mathcal{A}$.
3. **Stabilité par union dénombrable :** toute union d'éléments de $\{\varnothing, \Omega\}$ reste dans $\{\varnothing, \Omega\}$.

> **À retenir pour l'examen :** Une tribu est une famille de parties de l'univers $\Omega$ qui contient $\Omega$, qui est stable par complémentaire et qui est stable par union dénombrable.
## 2. Probabilité : Axiomes et propriétés

### 1. Définition d'une probabilité
Soit $(\Omega, \mathcal{A})$ un espace probabilisable. Une **probabilité** sur $(\Omega, \mathcal{A})$ est une application $P$ qui associe à chaque événement $A \in \mathcal{A}$ un nombre réel compris entre $0$ et $1$ :
$$P : \mathcal{A} \longrightarrow [0, 1]$$

* $P(A) = 0$ : l'événement $A$ est impossible (ou quasi impossible).
* $P(A) = 0,5$ : l'événement $A$ a $50\,\%$ de chances de se réaliser.
* $P(A) = 1$ : l'événement $A$ est certain (ou quasi certain).

---

### 2. Les axiomes d'une probabilité (Axiomes de Kolmogorov)
Une application $P : \mathcal{A} \to [0, 1]$ est une probabilité si elle vérifie les deux axiomes suivants :

* **Axiome 1 : Probabilité de l'univers**
  $$P(\Omega) = 1$$
  La probabilité de l'événement certain est égale à $1$ ($100\,\%$). Lors d'une expérience aléatoire, l'une des issues de $\Omega$ se réalise nécessairement.

* **Axiome 2 : $\sigma$-additivité (Additivité dénombrable)**
  Pour toute suite d'événements $(A_i)_{i \ge 1}$ de $\mathcal{A}$ **deux à deux incompatibles** (c'est-à-dire $A_i \cap A_j = \varnothing$ pour tout $i \neq j$), la probabilité de leur union est égale à la somme de leurs probabilités :
  $$P\left(\bigcup_{i=1}^{+\infty} A_i\right) = \sum_{i=1}^{+\infty} P(A_i)$$

**Exemple d'application :**
On lance un dé cubique équilibré ($\Omega = \{1, 2, 3, 4, 5, 6\}$). Soient les événements $A = \{1\}$ et $B = \{2\}$.
Comme il est impossible d'obtenir $1$ et $2$ simultanément sur un même lancer, $A$ et $B$ sont incompatibles ($A \cap B = \varnothing$). On a $P(A) = \frac{1}{6}$ et $P(B) = \frac{1}{6}$, d'où :
$$P(A \cup B) = P(A) + P(B) = \frac{1}{6} + \frac{1}{6} = \frac{2}{6} = \frac{1}{3}$$

---

### 3. Propriétés fondamentales d'une probabilité
À partir des deux axiomes précédents, on déduit les propriétés suivantes pour tous événements $A, B \in \mathcal{A}$ :

* **Probabilité de l'événement impossible :**
  $$P(\varnothing) = 0$$

* **Probabilité de l'événement contraire (complémentaire) :**
  $$P(A^c) = 1 - P(A)$$

* **Additivité finie (cas de deux événements incompatibles) :**
  Si $A \cap B = \varnothing$, alors :
  $$P(A \cup B) = P(A) + P(B)$$

* **Formule du crible (cas général de deux événements quelconques) :**
  $$P(A \cup B) = P(A) + P(B) - P(A \cap B)$$

* **Croissance de la probabilité :**
  Si $A \subset B$, alors :
  $$P(A) \le P(B) \quad \text{et} \quad P(B \setminus A) = P(B) - P(A)$$