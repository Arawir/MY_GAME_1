QT += core network widgets 
requires(qtConfig(combobox))

HEADERS       = Inc/socket.hh \
                Inc/gui.hh \
                Inc/main_app.hh 
                
SOURCES       = Src/socket.cpp \
                Src/gui.cpp \
                Src/main_app.cpp \
                Src/main.cpp \

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
