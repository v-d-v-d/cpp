/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:59:04 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/20 03:51:04 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}

	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: s1 & s2 can't be empty" << std::endl;
		return (1);
	}

	std::string		filename(argv[1]);
	std::ifstream	ifs_filename(filename.c_str());

	if (!ifs_filename.is_open())
	{
		std::cout << "Error: This file can't be open" << std::endl;
		return (1);
	}
	filename.append(".replace");
	std::ofstream	ofs_filename(filename.c_str());

	std::string		file;
	std::string		line;

	getline(ifs_filename, line);
	file.append(line);
	while (getline(ifs_filename, line))
	{
		file.append("\n");
		file.append(line);
	}
	
	std::size_t	pos = 0;
	while ((pos = file.find(s1, pos)) != std::string::npos)
	{
		file.erase(pos,s1.length());
		file.insert(pos, s2);
		pos += s2.length();
	}
	ofs_filename << file;
	
	ifs_filename.close();
	ofs_filename.close();
	return 0;
}

