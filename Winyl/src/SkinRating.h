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

// SkinRating

#include "SkinElement.h"

class SkinRating : public SkinElement
{

public:
	SkinRating();
	virtual ~SkinRating();

	ExImage imShow;
	ExImage imHide;
	ExImage imShowHover;
	ExImage imHideHover;

	static int rating;
	int rating2 = 0;
	int rating3 = 0;
	bool isEnable = false;
	bool isVisible = false;

	int GetWidth();
	int GetHeight();

	bool IsRedrawHover() override;
	bool IsRedrawPress() override;

	bool LoadSkin(const std::wstring& file, ZipFile* zipFile) override;
	void Draw(HDC dc, bool isAlpha) override;

	SkinElement* OnMouseMove(unsigned flags, CPoint& point) override;
	SkinElement* OnButtonDown(unsigned flags, CPoint& point) override;
	SkinElement* OnButtonUp(unsigned flags, CPoint& point) override;
	SkinElement* OnMouseLeave() override;

	void SetParam(int param) override;
	int GetParam() override;
};


