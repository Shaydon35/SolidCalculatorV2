#include <iostream>
#include <string>
//741 pyr
int main()
{
	//general
	float pi = 3.14159;
	std::string calculType;
	std::string remakeCalcul;
	std::string shapeTypeArea;
	std::string shapeTypeVolume;
	float finalAnswer;
	//-->aire
	//carre
	float squareSide;
	//rectangle
	float rectangleBase;
	float rectangleHeight;
	//triangle
	float triangleBase;
	float triangleHeight;
	//parallelogramme
	float parallelogramBase;
	float parallelogramHeight;
	//lozange
	float lozengeBase;
	float lozengeHeight;
	//trapeze
	float trapezeFirstBase;
	float trapezeSecondBase;
	float trapezeHeight;
	//cercle
	std::string circleInfoType;
	float circleDiameter;
	float circleRadius;
	//polygone regulier
	int nReg;
	float cReg;
	float aReg;
	//-->volume
	//sphere/boule + demi-sphere/demi-boule
	std::string sphereInfoType;
	float sphereDiameter;
	float sphereRadius;
	//cube
	float cubeSide;
	//cylindre
	std::string cylinderInfoType;
	float cylinderDiameter;
	float cylinderRadius;
	float cylinderBaseArea;
	float cylinderHeight;
	//cone
	std::string coneInfoType;
	float coneDiameter;
	float coneRadius;
	float coneBaseArea;
	float coneHeight;
	//prisme
	std::string prismBaseType;
	float prismRectangleBase;
	float prismRectangleHeight;
	float prismTrapezeFirstBase;
	float prismTrapezeSecondBase;
	float prismTrapezeHeight;
	float prismTriangleBase;
	float prismTriangleHeight;
	float prismSquareSide;
	int prismNReg;
	float prismCReg;
	float prismAReg;
	float prismHeight;
	float prismBaseArea;
	//pyramide
	std::string pyramidBaseType;
	float pyramidRectangleBase;
	float pyramidRectangleHeight;
	float pyramidTriangleBase;
	float pyramidTriangleHeight;
	float pyramidSquareSide;
	int pyramidNReg;
	float pyramidCReg;
	float pyramidAReg;
	float pyramidHeight;
	float pyramidBaseArea;


	std::cout << "------------------------------------------------------------------------------------------------------------\n";
	std::cout << "Veuillez d'abord indiquer le type de calcul que vous souhaitez effectuer >>\n";
	std::cout << "('a' -> aire) ('v' -> volume)\n";
	std::cin >> calculType;
	//aire
	if (calculType == "a") {
		std::cout << "Veuillez indiquer le type de figure que vous souhaitez utiliser >>\n";
		std::cout << "('squ' -> carre) ('rec' -> rectangle) ('tri' -> triangle) ('par' -> parallelogramme)\n";
		std::cout << "('loz' -> lozange) ('tra' -> trapeze) ('cir' -> cercle) ('reg' -> polygone regulier [5+])\n";
		std::cin >> shapeTypeArea;
		//conditions
		if (shapeTypeArea == "squ")
		{
			std::cout << "Veuillez indiquer la mesure d'un des cote du carre >>\n";
			std::cin >> squareSide;
			finalAnswer = squareSide * squareSide;
			std::cout << "L'aire du carre est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "rec")
		{
			std::cout << "Veuillez indiquer la mesure de la base du rectangle >>\n";
			std::cin >> rectangleBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur du rectangle >>\n";
			std::cin >> rectangleHeight;
			finalAnswer = rectangleBase * rectangleHeight;
			std::cout << "L'aire du rectangle est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "tri")
		{
			std::cout << "Veuillez indiquer la mesure de la base du triangle >>\n";
			std::cin >> triangleBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur du triangle >>\n";
			std::cin >> triangleHeight;
			finalAnswer = (triangleBase * triangleHeight) / 2;
			std::cout << "L'aire du triangle est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "par")
		{
			std::cout << "Veuillez indiquer la mesure de la base du parallelogramme >>\n";
			std::cin >> parallelogramBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur du parallelogramme >>\n";
			std::cin >> parallelogramHeight;
			finalAnswer = parallelogramBase * parallelogramHeight;
			std::cout << "L'aire du parallelogramme est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "loz")
		{
			std::cout << "Veuillez indiquer la mesure de la base du lozange >>\n";
			std::cin >> lozengeBase;
			std::cout << "Veuillez indiquer la mesure de la hauteur du lozange >>\n";
			std::cin >> lozengeHeight;
			finalAnswer = (lozengeBase * lozengeHeight) / 2;
			std::cout << "L'aire du lozange est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "tra")
		{
			std::cout << "Veuillez indiquer la mesure de la premiere base du trapeze >>\n";
			std::cin >> trapezeFirstBase;
			std::cout << "Veuillez indiquer la mesure de la seconde base du trapeze >>\n";
			std::cin >> trapezeSecondBase;
			std::cout << "Veuillez indiquer la hauteur du trapeze >>\n";
			std::cin >> trapezeHeight;
			finalAnswer = ((trapezeFirstBase + trapezeSecondBase) * trapezeHeight) / 2;
			std::cout << "L'aire du trapeze est de : ";
			std::cout << finalAnswer;
			std::cout << "(u2)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "cir")
		{
			std::cout << "Veuillez indiquer le type d'information detenu >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> circleInfoType;
			if (circleInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre du cercle >>\n";
				std::cin >> circleDiameter;
				finalAnswer = pi * circleDiameter;
				std::cout << "L'aire du cercle est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (circleInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon du cercle >>\n";
				std::cin >> circleRadius;
				finalAnswer = (circleRadius * 2) * pi;
				std::cout << "L'aire du cercle est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeArea == "reg")
		{
			std::cout << "Veuillez indiquer le nombre de cote de votre polygone regulier >>\n";
			std::cin >> nReg;
			if (nReg < 5)
			{
				std::cout << "Erreur >> aucune valeure en dessous de '5' n'est permise >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
			else if (nReg >= 5)
			{
				std::cout << "Veuillez indiquer la mesure d'un des cote du polygone regulier >>\n";
				std::cin >> cReg;
				std::cout << "Veuillez indiquer la mesure de l'apotheme du polygone regulier >>\n";
				std::cin >> aReg;
				finalAnswer = (nReg * cReg * aReg) / 2;
				std::cout << "L'aire du polygone est de : ";
				std::cout << finalAnswer;
				std::cout << "(u2)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	//volume
	else if (calculType == "v")
	{
		std::cout << "Veuillez indiquer le type de solide que vous souhaitez utiliser >>\n";
		std::cout << "('pri' -> prisme) ('esp' -> boule/sphere) ('cub' -> cube) ('con' -> cone)\n";
		std::cout << "('pyr' -> pyramide) ('cyl' -> cylindre) ('hsp' -> demi-boule/demi-sphere)\n";
		std::cin >> shapeTypeVolume;
		//conditions
		////////////////////////////////////////////////////////
		if (shapeTypeVolume == "pri")
		{
			std::cout << "Veuillez indiquer le type de base de votre prisme >>\n";
			std::cout << "('rec' -> rectangle) ('tra' -> trapeze) ('tri' -> triangle)\n";
			std::cout << "('squ' -> carre) ('reg' -> polygone regulier)\n";
			std::cin >> prismBaseType;
			if (prismBaseType == "rec")
			{
				std::cout << "Veuillez indiquer la mesure de la base du rectangle >>\n";
				std::cin >> prismRectangleBase;
				std::cout << "Veuillez indiquer la mesure de la hauteur du rectangle >>\n";
				std::cin >> prismRectangleHeight;
				prismBaseArea = prismRectangleBase * prismRectangleHeight;
				std::cout << "Veuillez indiquer la mesure de la hauteur du prisme a base rectangulaire >>\n";
				std::cin >> prismHeight;
				finalAnswer = prismBaseArea * prismHeight;
				std::cout << "L'aire du prisme est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (prismBaseType == "tra")
			{
				std::cout << "Veuillez indiquer la mesure de la premiere base du trapeze >>\n";
				std::cin >> prismTrapezeFirstBase;
				std::cout << "Veuillez indiquer la mesure de la seconde base du trapeze >>\n";
				std::cin >> prismTrapezeSecondBase;
				std::cout << "Veuillez indiquer la mesure de la hauteur du trapeze >>\n";
				std::cin >> prismTrapezeHeight;
				prismBaseArea = ((prismTrapezeFirstBase + prismTrapezeSecondBase) * prismTrapezeHeight) / 2;
				std::cout << "Veuillez indiquer la mesure de la hauteur du prisme a base trapezoidale >>\n";
				std::cin >> prismHeight;
				finalAnswer = prismBaseArea * prismHeight;
				std::cout << "L'aire du prisme est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (prismBaseType == "tri")
			{
				std::cout << "Veuillez indiquer la mesure de la base du triangle >>\n";
				std::cin >> prismTriangleBase;
				std::cout << "Veuillez indiquer la mesure de la hauteur du triangle >>\n";
				std::cin >> prismTriangleHeight;
				prismBaseArea = (prismTriangleBase * prismTriangleHeight) / 2;
				std::cout << "Veuillez indiquer la mesure de la hauteur du prisme a base triangulaire >>\n";
				std::cin >> prismHeight;
				finalAnswer = prismBaseArea * prismHeight;
				std::cout << "L'aire du prisme est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (prismBaseType == "squ")
			{
				std::cout << "Veuillez indiquer la mesure de la base du carre >>\n";
				std::cin >> prismSquareSide;
				prismBaseArea = prismSquareSide * prismSquareSide;
				std::cout << "Veuillez indiquer la mesure de la hauteur du prisme a base carre >>\n";
				std::cin >> prismHeight;
				finalAnswer = prismBaseArea * prismHeight;
				std::cout << "L'aire du prisme est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
			}
			else if (prismBaseType == "reg")
			{
				std::cout << "Veuillez indiquer le nombre de cote de votre polygone regulier >>\n";
				std::cin >> prismNReg;
				if (prismNReg < 5)
				{
					std::cout << "Erreur >> aucune valeure en dessous de '5' n'est permise >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
				else if (prismNReg >= 5)
				{
					std::cout << "Veuillez indiquer la mesure d'un des cote du polygone regulier >>\n";
					std::cin >> prismCReg;
					std::cout << "Veuillez indiquer la mesure de l'apotheme du polygone regulier >>\n";
					std::cin >> prismAReg;
					prismBaseArea = (prismNReg * prismCReg * prismAReg) / 2;
					std::cout << "Veuillez indiquer la mesure de la hauteur du prisme a base reguliere >>\n";
					std::cin >> prismHeight;
					finalAnswer = prismBaseArea * prismHeight;
					std::cout << "L'aire du prisme est de : ";
					std::cout << finalAnswer;
					std::cout << "(u3)";
					std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
					std::cout << "('y' -> oui) ('n' -> non) \n";
					std::cin >> remakeCalcul;
					if (remakeCalcul == "y")
					{
						main();
					}
					else if (remakeCalcul == "n")
					{
						std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
					}
					else
					{
						std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
						std::cin.ignore();
						std::cin.ignore();
						main();
					}
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeVolume == "esp")
		{
			std::cout << "Veuillez indiquer le type d'information detenu >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> sphereInfoType;
			if (sphereInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre de la boule/sphere >>\n";
				std::cin >> sphereDiameter;
				sphereRadius = sphereDiameter / 2;
				finalAnswer = ((sphereRadius * sphereRadius * sphereRadius) * pi * 4) / 3;
				std::cout << "Le volume de la boule/sphere est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (sphereInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon de la boule/sphere >>\n";
				std::cin >> sphereRadius;
				finalAnswer = ((sphereRadius * sphereRadius * sphereRadius) * pi * 4) / 3;
				std::cout << "Le volume de la boule/sphere est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeVolume == "cub")
		{
			std::cout << "Veuillez indiquer la mesure d'un des cote du cube >>\n";
			std::cin >> cubeSide;
			finalAnswer = cubeSide * cubeSide * cubeSide;
			std::cout << "Le volume du cube est de : ";
			std::cout << finalAnswer;
			std::cout << "(u3)";
			std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
			std::cout << "('y' -> oui) ('n' -> non) \n";
			std::cin >> remakeCalcul;
			if (remakeCalcul == "y")
			{
				main();
			}
			else if (remakeCalcul == "n")
			{
				std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeVolume == "con")
		{
			std::cout << "Veuillez indiquer le type d'information detenu (base) >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> coneInfoType;
			if (coneInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre de la base du cone >>\n";
				std::cin >> coneDiameter;
				coneRadius = coneDiameter / 2;
				coneBaseArea = (coneRadius * coneRadius) * pi;
				std::cout << "Veuillez indiquer la hauteur du cone >>\n";
				std::cin >> coneHeight;
				finalAnswer = (coneBaseArea * coneHeight) / 3;
				std::cout << "Le volume du cone est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (cylinderInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon de la base du cone >>\n";
				std::cin >> coneRadius;
				coneBaseArea = (coneRadius * coneRadius) * pi;
				std::cout << "Veuillez indiquer la hauteur du cone >>\n";
				std::cin >> coneHeight;
				finalAnswer = (coneBaseArea * coneHeight) / 3;
				std::cout << "Le volume du cone est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		//////////////////////////////////////////////////////////////////////////// pyramides
		else if (shapeTypeVolume == "pyr")
		{
			std::cout << "Veuillez indiquer le type de base de votre pyramide >>\n";
			std::cout << "('rec' -> rectangle) ('tri' -> triangle)\n";
			std::cout << "('squ' -> carre) ('reg' -> polygone regulier)\n";
			std::cin >> pyramidBaseType;
			if (pyramidBaseType == "rec")
			{
				std::cout << "Veuillez indiquer la mesure de la base du rectangle >>\n";
				std::cin >> pyramidRectangleBase;
				std::cout << "Veuillez indiquer la mesure de la hauteur du rectangle >>\n";
				std::cin >> pyramidRectangleHeight;
				pyramidBaseArea = pyramidRectangleBase * pyramidRectangleHeight;
				std::cout << "Veuillez indiquer la mesure de la hauteur de la pyramide a base rectangulaire >>\n";
				std::cin >> pyramidHeight;
				finalAnswer = (pyramidBaseArea * pyramidHeight) / 3;
				std::cout << "L'aire de la pyramide est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (pyramidBaseType == "tri")
			{
				std::cout << "Veuillez indiquer la mesure de la base du triangle >>\n";
				std::cin >> pyramidTriangleBase;
				std::cout << "Veuillez indiquer la mesure de la hauteur du triangle >>\n";
				std::cin >> pyramidTriangleHeight;
				pyramidBaseArea = (pyramidTriangleBase * pyramidTriangleHeight) / 2;
				std::cout << "Veuillez indiquer la mesure de la hauteur de la pyramide a base triangulaire >>\n";
				std::cin >> pyramidHeight;
				finalAnswer = (pyramidBaseArea * pyramidHeight) / 3;
				std::cout << "L'aire de la pyramide est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (pyramidBaseType == "squ")
			{
				std::cout << "Veuillez indiquer la mesure de la base du carre >>\n";
				std::cin >> pyramidSquareSide;
				pyramidBaseArea = pyramidSquareSide * pyramidSquareSide;
				std::cout << "Veuillez indiquer la mesure de la hauteur de la pyramide a base carre >>\n";
				std::cin >> pyramidHeight;
				finalAnswer = (pyramidBaseArea * pyramidHeight) / 3;
				std::cout << "L'aire de la pyramide est de : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
			}
			else if (pyramidBaseType == "reg")
			{
				std::cout << "Veuillez indiquer le nombre de cote de votre polygone regulier >>\n";
				std::cin >> pyramidNReg;
				if (pyramidNReg < 5)
				{
					std::cout << "Erreur >> aucune valeure en dessous de '5' n'est permise >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
				else if (pyramidNReg >= 5)
				{
					std::cout << "Veuillez indiquer la mesure d'un des cote du polygone regulier >>\n";
					std::cin >> pyramidCReg;
					std::cout << "Veuillez indiquer la mesure de l'apotheme du polygone regulier >>\n";
					std::cin >> pyramidAReg;
					pyramidBaseArea = (pyramidNReg * pyramidCReg * pyramidAReg) / 2;
					std::cout << "Veuillez indiquer la mesure de la hauteur de la pyramide a base reguliere >>\n";
					std::cin >> pyramidHeight;
					finalAnswer = (pyramidBaseArea * pyramidHeight) / 3;
					std::cout << "L'aire de la pyramide est de : ";
					std::cout << finalAnswer;
					std::cout << "(u3)";
					std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
					std::cout << "('y' -> oui) ('n' -> non) \n";
					std::cin >> remakeCalcul;
					if (remakeCalcul == "y")
					{
						main();
					}
					else if (remakeCalcul == "n")
					{
						std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
					}
					else
					{
						std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
						std::cin.ignore();
						std::cin.ignore();
						main();
					}
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeVolume == "cyl")
		{
			std::cout << "Veuillez indiquer le type d'information detenu (base) >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> cylinderInfoType;
			if (cylinderInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre de la base du cylindre >>\n";
				std::cin >> cylinderDiameter;
				cylinderRadius = cylinderDiameter / 2;
				cylinderBaseArea = (cylinderRadius * cylinderRadius) * pi;
				std::cout << "Veuillez indiquer la hauteur du cylindre >>\n";
				std::cin >> cylinderHeight;
				finalAnswer = cylinderBaseArea * cylinderHeight;
				std::cout << "Le volume du cylindre est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (cylinderInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon de la base du cylindre >>\n";
				std::cin >> cylinderRadius;
				cylinderBaseArea = (cylinderRadius * cylinderRadius) * pi;
				std::cout << "Veuillez indiquer la hauteur du cylindre >>\n";
				std::cin >> cylinderHeight;
				finalAnswer = cylinderBaseArea * cylinderHeight;
				std::cout << "Le volume du cylindre est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}
		}
		else if (shapeTypeVolume == "hsp")
		{
			std::cout << "Veuillez indiquer le type d'information detenu >>\n";
			std::cout << "('d' -> diametre) ('r' -> rayon)\n";
			std::cin >> sphereInfoType;
			if (sphereInfoType == "d")
			{
				std::cout << "Veuillez indiquer le diametre de la demi-boule/demi-sphere >>\n";
				std::cin >> sphereDiameter;
				sphereRadius = sphereDiameter / 2;
				finalAnswer = ((sphereRadius * sphereRadius * sphereRadius) * pi * 2) / 3;
				std::cout << "Le volume de la demi-boule/demi-sphere est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else if (sphereInfoType == "r")
			{
				std::cout << "Veuillez indiquer le rayon de la demi-boule/demi-sphere >>\n";
				std::cin >> sphereRadius;
				finalAnswer = ((sphereRadius * sphereRadius * sphereRadius) * pi * 2) / 3;
				std::cout << "Le volume de la demi-boule/demi-sphere est de environ : ";
				std::cout << finalAnswer;
				std::cout << "(u3)";
				std::cout << "\nVeuillez indiquer si vous souhaitez refaire un calcul >>\n";
				std::cout << "('y' -> oui) ('n' -> non) \n";
				std::cin >> remakeCalcul;
				if (remakeCalcul == "y")
				{
					main();
				}
				else if (remakeCalcul == "n")
				{
					std::cout << "Veuillez appuyer sur 'Entrer' pour fermer le programme...";
				}
				else
				{
					std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
					std::cin.ignore();
					std::cin.ignore();
					main();
				}
			}
			else
			{
				std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
				std::cin.ignore();
				std::cin.ignore();
				main();
			}

		}
		else
		{
			std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
			std::cin.ignore();
			std::cin.ignore();
			main();
		}
	}
	//erreur
	else
	{
		std::cout << "Erreur >> aucune valeure parmi les choix n'a ete entree >> veuillez appuyer sur 'Entrer' pour recommencer... \n";
		std::cin.ignore();
		std::cin.ignore();
		main();
	}

	//Made by Shaydon Gervais
}
