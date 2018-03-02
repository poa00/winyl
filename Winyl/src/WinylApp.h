/*  This file is part of Winyl Player source code.
    Copyright (C) 2008-2018, Alex Kras. <winylplayer@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include <string>

class WinylApp
{
public:
	WinylApp();
	virtual ~WinylApp();

	void Init();

private:
	void ParseCommandLine(std::wstring& openFiles, bool& isEmbedding, bool& isPortable, bool& isUnregister);
	bool SendOpenFiles(HWND hWnd, const std::wstring& openFiles, bool isEmbedding);

	bool isOleInitialize = false;
	//ULONG_PTR gdiplusToken = NULL;
};

