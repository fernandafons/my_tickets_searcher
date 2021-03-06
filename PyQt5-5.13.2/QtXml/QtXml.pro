TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install
TARGET = QtXml

win32 {
    PY_MODULE = QtXml.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtXml.so

    macx {
        PY_MODULE_SRC = $(TARGET).plugin/Contents/MacOS/$(TARGET)

        QMAKE_LFLAGS += "-undefined dynamic_lookup"

        equals(QT_MINOR_VERSION, 5) {
            QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
        }
    } else {
        PY_MODULE_SRC = $(TARGET)
    }
}

QMAKE_POST_LINK = $(COPY_FILE) $$PY_MODULE_SRC $$PY_MODULE

target.CONFIG = no_check_exist
target.files = $$PY_MODULE

target.path = /home/fernandaabreu/projetos/MyTicketsSearcher/venv/lib/python3.7/site-packages/PyQt5
INSTALLS += target
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/include
INCLUDEPATH += /usr/include/python3.7m
win32 {
    LIBS += -L
}
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQDomAttr.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQDomComment.cpp sipQtXmlQDomDocument.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQDomElement.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQDomNode.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomNotation.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQDomText.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQXmlDeclHandler.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQXmlReader.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlcmodule.cpp
