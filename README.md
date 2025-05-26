❌ Attention :

L’objet doit encore exister après le retour.
Ne retourne jamais une référence vers une variable locale !

Matrice& getWrong() {
    Matrice m(3,3);
    return m; // ❌ ERREUR : m est détruite à la fin de la fonction
}

✅ Résumé
Cas d’usage	Type de retour conseillé
Tu crées un nouvel objet à retourner	return Objet (par valeur)
Tu veux retourner un objet existant et modifiable	Objet&
Tu veux retourner un objet existant en lecture seule	const Objet&
Tu retournes une variable locale	⚠ Jamais en référence

📌 Erreurs fréquentes rencontrées dans mes codes (pile/file)
1. Mauvaise gestion de la mémoire dynamique (new/delete)
Exemples :

Ne pas libérer la mémoire (delete[] tab ou delete courant) avant de réaffecter un pointeur.

Ne pas allouer la mémoire dans empiler si le tableau est vide.

Impact :

Fuite mémoire (memory leak), comportement non défini, plantages.

Correction :

Toujours libérer la mémoire ancienne avant une réallocation.

S’assurer que new est utilisé avant d’écrire dans un tableau dynamique.

2. Conditions d'arrêt incorrectes dans les boucles
Exemples :

Dans afficher(), boucle while (!courant) (erreur : condition toujours fausse).

Mauvais incrément (tab[i] = tab[i++]), ce qui saute une case.

Impact :

La boucle ne s’exécute jamais ou provoque des résultats incorrects.

Correction :

Vérifier les conditions de boucle (while (courant != nullptr) pour listes).

Utiliser des incréments corrects (tab[i] = tab[i + 1], puis i++ à l’extérieur).

3. Gestion incorrecte des pointeurs dans les listes chaînées
Exemples :

Ne pas initialiser courant->suiv à nullptr dans enfiler.

Modifier directement tet dans une boucle de suppression.

Impact :

Comportements non définis ou perte d’accès à des nœuds.

Correction :

Toujours initialiser les pointeurs (courant->suiv = nullptr).

Utiliser un pointeur temporaire pour parcourir la liste.

4. Mauvaise gestion du tableau dans pile
Exemples :

Ne pas décaler correctement les éléments lors de empiler ou depiler.

Réinitialiser le tableau à chaque empiler au lieu de l’utiliser sur la durée.

Impact :

Pile incorrecte (valeurs perdues), dépassement de capacité.

Correction :

Utiliser un tableau statique de taille fixe (new int[5] dans le constructeur).

Ne pas réallouer le tableau dans empiler.

5. Mauvais test de pile ou file vide
Exemples :

Tester tab == nullptr au lieu de taille == 0 dans la pile.

Ne pas vérifier si tet == nullptr dans les listes chaînées.

Impact :

Fonctions comme sommet() ou tete() accèdent à de la mémoire invalide.

Correction :

Toujours tester avec des conditions correctes :
pile: return (taille == 0);
file: return (tet == nullptr);

6. Surcharge d’opérateur incorrecte ou non conventionnelle
Exemples :

Utiliser operator+() pour faire une addition de sommet sans paramètre.

Pas d’exception levée en cas de pile/file vide avant une opération.

Impact :

Perte de lisibilité et de compatibilité C++.

Correction :

Respecter les conventions (operator+(pile p) si on veut deux objets).

Vérifier les préconditions (ex. : au moins 2 éléments dans la pile pour +).

7. Affichage incorrect de la pile ou de la file
Exemples :

Affichage infini ou rien n’est affiché (boucle while (!courant)).

Pas d’espace ou de format lisible (cout << courant->val << "/").

Correction :

Bien formater l’affichage.

Corriger les conditions de parcours (while (courant != nullptr)).

8. Utilisation hasardeuse du constructeur de copie ou de l'opérateur =
Exemples :

Ne pas vider l’ancien objet dans operator=.

Réutiliser le même pointeur (parcour) pour deux tâches différentes.

Correction :

Toujours libérer les anciennes données.

Créer une fonction copierDepuis(const file&) pour éviter les duplications.

9. Oubli d’initialisation ou de retour de valeur
Exemples :

Ne pas initialiser certains champs (courant->suiv).

Ne pas retourner de valeur dans sommet() si pile vide.

Correction :

Toujours retourner quelque chose ou lancer une exception.

✅ Leçons retenues
Toujours valider la mémoire dynamique.

Utiliser des pointeurs de manière sécurisée.

Bien structurer les boucles.

Respecter les conventions de C++ moderne.
