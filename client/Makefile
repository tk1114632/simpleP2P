client:downloader uploader TorrentGenerator

uploader:func.cpp uploader.cpp
	g++-4.8 -std=c++11 uploader.cpp func.cpp -lcrypto -lpthread -o uploader

downloader:func.cpp downloader.cpp
	g++-4.8 -std=c++11 downloader.cpp func.cpp -lcrypto -lpthread -o downloader

TorrentGenerator:func.cpp TorrentGenerator.cpp
	g++-4.8 -std=c++11 func.cpp TorrentGenerator.cpp -lcrypto -o TG


