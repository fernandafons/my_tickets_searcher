TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += sql widgets
CONFIG += release
CONFIG -= android_install
TARGET = QtSql

win32 {
    PY_MODULE = QtSql.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtSql.so

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
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/include
INCLUDEPATH += /usr/include/python3.7m
win32 {
    LIBS += -L
}
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQMap0100QString0100QVariant.cpp sipQtSqlQSql.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlError.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQSqlParamType.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlcmodule.cpp
