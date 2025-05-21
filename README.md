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
