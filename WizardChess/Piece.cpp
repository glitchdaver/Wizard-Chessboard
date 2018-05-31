/*
 * PieceInterface abstract class implementation.
 *
 * Copyright (c) 2018 Davide Molinelli.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the   hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Piece.h"

Piece::Piece(){};

Piece::Piece(const char * initialPosition){
  //Serial.println(initialPosition);
  position = initialPosition;
}

String Piece::getPosition(){
  return position;
};

void Piece::setPosition(const char * newCoordinates){
  position = newCoordinates;
};