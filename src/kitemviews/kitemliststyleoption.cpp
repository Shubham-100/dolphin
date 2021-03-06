/***************************************************************************
 *   Copyright (C) 2011 by Peter Penz <peter.penz19@gmail.com>             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#include "kitemliststyleoption.h"


KItemListStyleOption::KItemListStyleOption() :
    rect(),
    font(),
    fontMetrics(QFont()),
    palette(),
    padding(-1),
    horizontalMargin(-1),
    verticalMargin(-1),
    iconSize(-1),
    extendedSelectionRegion(false),
    maxTextLines(0),
    maxTextWidth(0)
{
}

KItemListStyleOption::KItemListStyleOption(const KItemListStyleOption& other) :
    rect(other.rect),
    font(other.font),
    fontMetrics(other.fontMetrics),
    palette(other.palette),
    padding(other.padding),
    horizontalMargin(other.horizontalMargin),
    verticalMargin(other.verticalMargin),
    iconSize(other.iconSize),
    extendedSelectionRegion(other.extendedSelectionRegion),
    maxTextLines(other.maxTextLines),
    maxTextWidth(other.maxTextWidth)
{
}

KItemListStyleOption::~KItemListStyleOption()
{
}

bool KItemListStyleOption::operator==(const KItemListStyleOption& other) const
{
    return rect == other.rect
            && font == other.font
            && fontMetrics == other.fontMetrics
            && palette == other.palette
            && padding == other.padding
            && horizontalMargin == other.horizontalMargin
            && verticalMargin == other.verticalMargin
            && iconSize == other.iconSize
            && extendedSelectionRegion == other.extendedSelectionRegion
            && maxTextLines == other.maxTextLines
            && maxTextWidth == other.maxTextWidth;
}

bool KItemListStyleOption::operator!=(const KItemListStyleOption& other) const
{
    return !(*this == other);
}
