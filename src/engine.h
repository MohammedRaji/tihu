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
#ifndef __TIHU__ENGINE_H
#define __TIHU__ENGINE_H

#pragma once

#include "helper.h"
#include "settings.h"
#include "tihu.h"

#include <map>

class IParser;
class CCorpus;
class CeSpeakLib;

class CEngine {
public:
  CEngine();
  ~CEngine();

  int LoadModules();
  void SetCallback(TIHU_CALLBACK callback, void *userData);

  void Tag(const std::string &text);
  void Speak(const std::string &text, TIHU_VOICE voice);
  void Diacritize(const std::string &text); // TODO:
  void Stop(bool stopped);

  bool SetParam(TIHU_PARAM param, int value);
  bool GetParam(TIHU_PARAM param, int &value);

  void EnableDebugMode(bool enable);

private:
  void ParsText(const std::string &text, std::list<IParser *> parsers);
  void LogText(const std::string &text) const;

  std::string GetCurrentModulePath() const;

private:
  std::map<int, IParser *> Parsers;
  CSettings Settings;
  TIHU_CALLBACK Callback;
  void *UserData;
  bool IsStopped;
  CeSpeakLib *eSpeakLib;
};

#endif
