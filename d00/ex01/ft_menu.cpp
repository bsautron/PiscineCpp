#include <phonebook.hpp>

static string	ft_choisecmd(void)
{
	string		c = "";

	while (c.compare("ADD") && c.compare("SEARCH") && c.compare("EXIT"))
	{
		cout << "\twrite \"ADD\" to ADD a contact" << endl;
		cout << "\twrite \"SEARCH\": to SEARCH a contact" << endl;
		cout << "\twrite \"EXIT\": to EXIT you're phohe" << endl;
		cout << ": ";
		getline(cin, c);
	}
	return (c);
}

static Contact	add(void)
{
	Contact		profil;
	string		str;

	cout << "First Name: ";
	getline(cin, str);
	profil.setFname(str);
	cout <<  "Last Name: ";
	getline(cin, str);
	profil.setLname(str);
	cout << "Nick Name: ";
	getline(cin, str);
	profil.setNname(str);
	cout << "Login: ";
	getline(cin, str);
	profil.setLogin(str);
	cout << "Postal Adrress: ";
	getline(cin, str);
	profil.setAddr(str);
	cout << "Email: ";
	getline(cin, str);
	profil.setEmail(str);
	cout << "Phone: ";
	getline(cin, str);
	profil.setPhone(str);
	cout << "Birthday date: ";
	getline(cin, str);
	profil.setBirthdayDate(str);
	cout << "Favorite meal: ";
	getline(cin, str);
	profil.setFmeal(str);
	cout << "Underwear color: ";
	getline(cin, str);
	profil.setUnderWearColor(str);
	cout << "Darkest secret: ";
	getline(cin, str);
	profil.setDarkestSecret(str);
	return (profil);
}

int		main(void)
{
	Contact	profil[8];
	int		nb = 0;
	string	cmd;

	while (1)
	{
		cout << "ContactPhone" << endl;
		cmd = ft_choisecmd();
		if (!cmd.compare("EXIT"))
			return (0);
		if (!cmd.compare("ADD") && nb < 8)
		{
			profil[nb] = add();
			nb++;
		}
		//std::getline (std::cin, md);

		//	std::string		cmd;

		//	std::cout << "awef " << std::endl;

	}
	return (0);
}
