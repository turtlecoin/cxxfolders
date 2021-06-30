/*
  Its is under the MIT license, to encourage reuse by cut-and-paste.

  Copyright (c) 2015 Poul Sander

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation files
  (the "Software"), to deal in the Software without restriction,
  including without limitation the rights to use, copy, modify, merge,
  publish, distribute, sublicense, and/or sell copies of the Software,
  and to permit persons to whom the Software is furnished to do so,
  subject to the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
  ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#include <iostream>
#include "sago/platform_folders.h"

int main() {
    std::cout << "AppData: " << cxxfolders::getUserAppData() << "\n";
	std::cout << "Config: " << cxxfolders::getConfigHome() << "\n";
	std::cout << "Data: " << cxxfolders::getDataHome() << "\n";
	std::cout << "Cache: " << cxxfolders::getCacheDir() << "\n";
	std::cout << "Documents: " << cxxfolders::getDocumentsFolder() << "\n";
	std::cout << "Desktop: " << cxxfolders::getDesktopFolder() << "\n";
	std::cout << "Pictures: " << cxxfolders::getPicturesFolder() << "\n";
	std::cout << "Public: " << cxxfolders::getPublicFolder() << "\n";
	std::cout << "Music: " << cxxfolders::getMusicFolder() << "\n";
	std::cout << "Video: " << cxxfolders::getVideoFolder() << "\n";
	std::cout << "Download: " << cxxfolders::getDownloadFolder() << "\n";
	std::cout << "Save Games 1: " << cxxfolders::getSaveGamesFolder1() << "\n";
	std::cout << "Save Games 2: " << cxxfolders::getSaveGamesFolder2() << "\n";
	std::vector<std::string> extraData;
	cxxfolders::appendAdditionalDataDirectories(extraData);
	for (size_t i=0; i < extraData.size(); ++i) {
		std::cout << "Additional data " << i << ": " << extraData.at(i) << "\n";
	}
	return 0;
}
