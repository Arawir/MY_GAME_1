QT += core widgets 
requires(qtConfig(combobox))

HEADERS       = gold.hh
                
SOURCES       = gold.cpp main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
