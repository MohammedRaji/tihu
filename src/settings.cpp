/*******************************************************************************
 * This file is part of Tihu.
 *
 * Tihu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tihu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tihu.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contributor(s):
 *    Mostafa Sedaghat Joo (mostafa.sedaghat@gmail.com)
 *
 *******************************************************************************/
#include "settings.h"

CSettings::CSettings()
    : Pitch(0), Rate(0), Volume(10), Frequency(22050), DebugMode(false) {}

void CSettings::SetPitch(int pitch) {
  Pitch = pitch; //
}

void CSettings::SetRate(int rate) {
  Rate = rate; //
}

void CSettings::SetVolume(int volume) {
  Volume = volume; //
}

void CSettings::SetFrequency(int frequency) {
  Frequency = frequency; //
}

void CSettings::SetIsDebugMode(bool enable) { DebugMode = enable; }

int CSettings::GetPitch() const {
  return Pitch; //
}

int CSettings::GetRate() const {
  return Rate; //
}

int CSettings::GetVolume() const {
  return Volume; //
}

int CSettings::GetFrequency() const { return Frequency; }

bool CSettings::IsDebugMode() const {
  return DebugMode; //
}