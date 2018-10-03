QT += quick network
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    HoundCpp \
    HoundCpp/c_foundations \
    HoundCpp/Utilities \
    HoundCpp/ClientCapabilityRegistry \
    HoundCpp/Common \
    HoundCpp/GoldenRetriever \
    HoundCpp/HoundConverser \
    HoundCpp/HoundJSON \
    HoundCpp/HoundRequester \
    HoundCpp/HTTP \
    HoundCpp/JSON \
    HoundCpp/Numbers \
    HoundCpp/ReferenceCounting \
    HoundCpp/SalmonEye \
    HoundCpp/SharedArray

SOURCES += \
    jokerequest.cpp \
    main.cpp

RESOURCES += qml.qrc \
    background-img.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    jokerequest.h \

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/SalmonEye/release/ -lSalmonEye
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/SalmonEye/debug/ -lSalmonEye
else:unix: LIBS += -L$$PWD/HoundCpp/SalmonEye/ -lSalmonEye

INCLUDEPATH += $$PWD/HoundCpp/SalmonEye
DEPENDPATH += $$PWD/HoundCpp/SalmonEye

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/SalmonEye/release/libSalmonEye.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/SalmonEye/debug/libSalmonEye.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/SalmonEye/release/SalmonEye.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/SalmonEye/debug/SalmonEye.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/SalmonEye/libSalmonEye.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/release/ -lc_foundations
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/debug/ -lc_foundations
else:unix: LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/ -lc_foundations

INCLUDEPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations
DEPENDPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/release/libc_foundations.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/debug/libc_foundations.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/release/c_foundations.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/debug/c_foundations.lib
else:unix: PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/c_foundations/libc_foundations.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/HoundRequester/release/ -lhoundrequester
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/HoundRequester/debug/ -lhoundrequester
else:unix: LIBS += -L$$PWD/HoundCpp/HoundRequester/ -lhoundrequester

INCLUDEPATH += $$PWD/HoundCpp/HoundRequester
DEPENDPATH += $$PWD/HoundCpp/HoundRequester

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundRequester/release/libhoundrequester.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundRequester/debug/libhoundrequester.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundRequester/release/houndrequester.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundRequester/debug/houndrequester.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/HoundRequester/libhoundrequester.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/Utilities/release/ -lutilities
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/Utilities/debug/ -lutilities
else:unix: LIBS += -L$$PWD/HoundCpp/Utilities/ -lutilities

INCLUDEPATH += $$PWD/HoundCpp/Utilities
DEPENDPATH += $$PWD/HoundCpp/Utilities

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Utilities/release/libutilities.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Utilities/debug/libutilities.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Utilities/release/utilities.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Utilities/debug/utilities.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/Utilities/libutilities.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/release/ -ljson_library
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/debug/ -ljson_library
else:unix: LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/ -ljson_library

INCLUDEPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON
DEPENDPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/release/libjson_library.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/debug/libjson_library.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/release/json_library.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/debug/json_library.lib
else:unix: PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/JSON/libjson_library.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/release/ -lhoundjson
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/debug/ -lhoundjson
else:unix: LIBS += -L$$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/ -lhoundjson

INCLUDEPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON
DEPENDPATH += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/release/libhoundjson.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/debug/libhoundjson.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/release/houndjson.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/debug/houndjson.lib
else:unix: PRE_TARGETDEPS += $$PWD/../chuck-norris-joke-part2/HoundCpp/HoundJSON/libhoundjson.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/ -lssl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/ -lssl
else:unix: LIBS += -L$$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/ -lssl

INCLUDEPATH += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/include
DEPENDPATH += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/libssl.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/libssl.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/ssl.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/ssl.lib



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/GoldenRetriever/release/ -lGoldenRetriever
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/GoldenRetriever/debug/ -lGoldenRetriever
else:unix: LIBS += -L$$PWD/HoundCpp/GoldenRetriever/ -lGoldenRetriever

INCLUDEPATH += $$PWD/HoundCpp/GoldenRetriever
DEPENDPATH += $$PWD/HoundCpp/GoldenRetriever

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/GoldenRetriever/release/libGoldenRetriever.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/GoldenRetriever/debug/libGoldenRetriever.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/GoldenRetriever/release/GoldenRetriever.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/GoldenRetriever/debug/GoldenRetriever.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/GoldenRetriever/libGoldenRetriever.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/ClientCapabilityRegistry/release/ -lclientcapabilityregistry
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/ClientCapabilityRegistry/debug/ -lclientcapabilityregistry
else:unix: LIBS += -L$$PWD/HoundCpp/ClientCapabilityRegistry/ -lclientcapabilityregistry

INCLUDEPATH += $$PWD/HoundCpp/ClientCapabilityRegistry
DEPENDPATH += $$PWD/HoundCpp/ClientCapabilityRegistry

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/ClientCapabilityRegistry/release/libclientcapabilityregistry.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/ClientCapabilityRegistry/debug/libclientcapabilityregistry.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/ClientCapabilityRegistry/release/clientcapabilityregistry.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/ClientCapabilityRegistry/debug/clientcapabilityregistry.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/ClientCapabilityRegistry/libclientcapabilityregistry.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/HoundConverser/release/ -lhoundconverser
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/HoundConverser/debug/ -lhoundconverser
else:unix: LIBS += -L$$PWD/HoundCpp/HoundConverser/ -lhoundconverser

INCLUDEPATH += $$PWD/HoundCpp/HoundConverser
DEPENDPATH += $$PWD/HoundCpp/HoundConverser

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundConverser/release/libhoundconverser.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundConverser/debug/libhoundconverser.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundConverser/release/houndconverser.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/HoundConverser/debug/houndconverser.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/HoundConverser/libhoundconverser.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/HoundCpp/Numbers/release/ -lnumbers
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/HoundCpp/Numbers/debug/ -lnumbers
else:unix: LIBS += -L$$PWD/HoundCpp/Numbers/ -lnumbers

INCLUDEPATH += $$PWD/HoundCpp/Numbers
DEPENDPATH += $$PWD/HoundCpp/Numbers

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Numbers/release/libnumbers.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Numbers/debug/libnumbers.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Numbers/release/numbers.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/HoundCpp/Numbers/debug/numbers.lib
else:unix: PRE_TARGETDEPS += $$PWD/HoundCpp/Numbers/libnumbers.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/ -lcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/ -lcrypto
else:unix: LIBS += -L$$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/ -lcrypto

INCLUDEPATH += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/include
DEPENDPATH += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/libcrypto.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/libcrypto.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/release/crypto.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/debug/crypto.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/openssl/1.0.2o_1/lib/libcrypto.a
