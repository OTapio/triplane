/*
 * Triplane Classic - a side-scrolling dogfighting game.
 * Copyright (C) 1996,1997,2009  Dodekaedron Software Creations Oy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * tjt@users.sourceforge.net
 */

#ifndef TRIPLANE_TRIPMIS_HPP
#define TRIPLANE_TRIPMIS_HPP

constexpr int32_t NUMBER_OF_COUNTRIES = 4;
constexpr int32_t NUMBER_OF_MISSIONS = 6;

constexpr int32_t GERMANY = 0;
constexpr int32_t FINLAND = 1;
constexpr int32_t ENGLAND = 2;
constexpr int32_t JAPAN = 3;

constexpr int32_t TRUE = 1;
constexpr int32_t FALSE = 0;

constexpr int32_t GERMAN_1 = 0;
constexpr int32_t FINLAND_1 = 1;
constexpr int32_t ENGLAND_1 = 2;
constexpr int32_t JAPAN_1 = 3;
constexpr int32_t GERMAN_2 = 4;
constexpr int32_t FINLAND_2 = 5;
constexpr int32_t ENGLAND_2 = 6;
constexpr int32_t JAPAN_2 = 7;
constexpr int32_t GERMAN_3 = 8;
constexpr int32_t FINLAND_3 = 9;
constexpr int32_t ENGLAND_3 = 10;
constexpr int32_t JAPAN_3 = 11;

constexpr int32_t ALLIED = 0;
constexpr int32_t ENEMY = 1;
constexpr int32_t NEUTRAL = 2;

constexpr int32_t BOMBER = 0;
constexpr int32_t PLANE = 1;
constexpr int32_t FIGHTER = 2;

constexpr int32_t LEFT = 0;
constexpr int32_t RIGHT = 1;

int number_of_planes[16];
int miss_plane_direction[16];
int miss_pl_x[16];
int miss_pl_y[16];
int fighter[16];
char mission_names[24][30] = {"Coast Islands",
                              "Japanese Counter-Attack",
                              "English Channel",
                              "Treachery",
                              "Capture",
                              "Against Odds",
                              "Beach-Head",
                              "Complex Wipeout",
                              "Beach-Head II",
                              "Troop Escort",
                              "Wood War",
                              "Showtime",
                              "Storehunt",
                              "Patriot Flight",
                              "Bombing Raid",
                              "Radio Interference",
                              "Channel Tunnel",
                              "Lord of the Lagoon",
                              "Tactical Bombardment",
                              "Finnish Outpost",
                              "Ransom",
                              "Harbor Hazard",
                              "Sweating Sauna",
                              "Oasis Offence"};

namespace world::tripmis {

    void init_mission(const int coutry, const int number);
    void init_germany(const int number);
    void init_finland(const int number);
    void init_england(const int number);
    void init_japan(const int number);

} // namespace world::tripmis

#endif //TRIPLANE_TRIPMIS_HPP
