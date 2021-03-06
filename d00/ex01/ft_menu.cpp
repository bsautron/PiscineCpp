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
		if (getline(cin, c) == 0)
			return ("EXIT");
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

static int	ft_select(int nb)
{
	string	str = "";
	int		pos = -1;

	while (pos < 0 || pos >= nb || pos > 7)
	{
		cout << "index: ";
		if (getline(cin, str) == 0)
			return (-1);
		pos = str.compare("0");
	}
	return (pos);
}

int		main(void)
{
	Contact	profil[8];
	int		nb = 0;
	int		i;
	int		pos;
	string	cmd;

	while (1)
	{
		cout << "ContactPhone" << endl;
		cmd = ft_choisecmd();
		if (!cmd.compare("EXIT"))
		{
			cout << endl;
			return (0);
		}
		if (!cmd.compare("ADD"))
		{
			profil[nb % 8] = add();
			nb++;
		}
		else if (!cmd.compare("SEARCH"))
		{
			i = 0;
			cout << "---------------------------------------------" << endl;
			cout << "|" << setw(11) << "index|" << setw(11) << "first name|" << setw(11) << "last name|" << setw(11) << "nickname|" << endl;
			cout << "---------------------------------------------" << endl;
			while (i < nb && i < 8)
			{
				cout << "|" << setw(10) << i;
				cout << "|" << setw(10);
				if (profil[i].getFname().length() > 10)
					cout << profil[i].getFname().substr(0 , 9) + ".";
				else
					cout << profil[i].getFname();
				cout << "|" << setw(10);
				if (profil[i].getLname().length() > 10)
					cout << profil[i].getLname().substr(0 , 9) + ".";
				else
					cout << profil[i].getLname();
				cout << "|" << setw(10);
				if (profil[i].getNname().length() > 10)
					cout << profil[i].getNname().substr(0 , 9) + ".";
				else
					cout << profil[i].getNname();
				cout << "|" << endl;
				i++;
			}
			cout << "---------------------------------------------" << endl;
			if (nb > 0)
			{
				pos = ft_select(nb);
				if (pos != -1)
					profil[pos].showAll();
			}
		}
	}
	return (0);
}
