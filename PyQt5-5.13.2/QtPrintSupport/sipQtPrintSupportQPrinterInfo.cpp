/*
 * Interface wrapper code.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtPrintSupport.h"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qprinterinfo.sip"
#include <qprinterinfo.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qprinter.sip"
#include <qprinter.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 140 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
#include <qprinter.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 646 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 28 "sip/QtGui/qpagesize.sip"
#include <qpagesize.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 263 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 58 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 61 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
#include <qprinterinfo.h>
#line 64 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 26 "sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 67 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"


PyDoc_STRVAR(doc_QPrinterInfo_printerName, "printerName(self) -> str");

extern "C" {static PyObject *meth_QPrinterInfo_printerName(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_printerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->printerName());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_printerName, doc_QPrinterInfo_printerName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isNull, doc_QPrinterInfo_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_isDefault, "isDefault(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isDefault(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isDefault(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefault();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isDefault, doc_QPrinterInfo_isDefault);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedPaperSizes, "supportedPaperSizes(self) -> List[QPagedPaintDevice.PageSize]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QList< ::QPagedPaintDevice::PageSize>*sipRes;

            sipRes = new  ::QList< ::QPagedPaintDevice::PageSize>(sipCpp->supportedPaperSizes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPagedPaintDevice_PageSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedPaperSizes, doc_QPrinterInfo_supportedPaperSizes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedSizesWithNames, "supportedSizesWithNames(self) -> List[Tuple[str, QSizeF]]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedSizesWithNames(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedSizesWithNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList<QPair<QString,QSizeF> >*sipRes;

            sipRes = new QList<QPair<QString,QSizeF> >(sipCpp->supportedSizesWithNames());

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QString_0100QSizeF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedSizesWithNames, doc_QPrinterInfo_supportedSizesWithNames);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_availablePrinters, "availablePrinters() -> List[QPrinterInfo]");

extern "C" {static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList< ::QPrinterInfo>*sipRes;

            sipRes = new QList< ::QPrinterInfo>( ::QPrinterInfo::availablePrinters());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPrinterInfo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_availablePrinters, doc_QPrinterInfo_availablePrinters);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPrinter, "defaultPrinter() -> QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QPrinterInfo*sipRes;

            sipRes = new  ::QPrinterInfo( ::QPrinterInfo::defaultPrinter());

            return sipConvertFromNewType(sipRes,sipType_QPrinterInfo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPrinter, doc_QPrinterInfo_defaultPrinter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_description, "description(self) -> str");

extern "C" {static PyObject *meth_QPrinterInfo_description(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_description, doc_QPrinterInfo_description);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_location, "location(self) -> str");

extern "C" {static PyObject *meth_QPrinterInfo_location(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_location(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->location());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_location, doc_QPrinterInfo_location);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_makeAndModel, "makeAndModel(self) -> str");

extern "C" {static PyObject *meth_QPrinterInfo_makeAndModel(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_makeAndModel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->makeAndModel());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_makeAndModel, doc_QPrinterInfo_makeAndModel);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_printerInfo, "printerInfo(str) -> QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_printerInfo(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_printerInfo(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QPrinterInfo*sipRes;

            sipRes = new  ::QPrinterInfo( ::QPrinterInfo::printerInfo(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPrinterInfo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_printerInfo, doc_QPrinterInfo_printerInfo);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_isRemote, "isRemote(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isRemote(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isRemote(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRemote();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isRemote, doc_QPrinterInfo_isRemote);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_state, "state(self) -> QPrinter.PrinterState");

extern "C" {static PyObject *meth_QPrinterInfo_state(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QPrinter::PrinterState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QPrinter_PrinterState);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_state, doc_QPrinterInfo_state);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedPageSizes, "supportedPageSizes(self) -> List[QPageSize]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedPageSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedPageSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList< ::QPageSize>*sipRes;

            sipRes = new QList< ::QPageSize>(sipCpp->supportedPageSizes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPageSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedPageSizes, doc_QPrinterInfo_supportedPageSizes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPageSize, "defaultPageSize(self) -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QPageSize*sipRes;

            sipRes = new  ::QPageSize(sipCpp->defaultPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPageSize, doc_QPrinterInfo_defaultPageSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportsCustomPageSizes, "supportsCustomPageSizes(self) -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_supportsCustomPageSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportsCustomPageSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->supportsCustomPageSizes();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportsCustomPageSizes, doc_QPrinterInfo_supportsCustomPageSizes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_minimumPhysicalPageSize, "minimumPhysicalPageSize(self) -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_minimumPhysicalPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_minimumPhysicalPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QPageSize*sipRes;

            sipRes = new  ::QPageSize(sipCpp->minimumPhysicalPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_minimumPhysicalPageSize, doc_QPrinterInfo_minimumPhysicalPageSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_maximumPhysicalPageSize, "maximumPhysicalPageSize(self) -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_maximumPhysicalPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_maximumPhysicalPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QPageSize*sipRes;

            sipRes = new  ::QPageSize(sipCpp->maximumPhysicalPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_maximumPhysicalPageSize, doc_QPrinterInfo_maximumPhysicalPageSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedResolutions, "supportedResolutions(self) -> List[int]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedResolutions(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedResolutions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QList<int>*sipRes;

            sipRes = new  ::QList<int>(sipCpp->supportedResolutions());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedResolutions, doc_QPrinterInfo_supportedResolutions);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_availablePrinterNames, "availablePrinterNames() -> List[str]");

extern "C" {static PyObject *meth_QPrinterInfo_availablePrinterNames(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_availablePrinterNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList( ::QPrinterInfo::availablePrinterNames());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_availablePrinterNames, doc_QPrinterInfo_availablePrinterNames);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPrinterName, "defaultPrinterName() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPrinterName(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPrinterName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QPrinterInfo::defaultPrinterName());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPrinterName, doc_QPrinterInfo_defaultPrinterName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultDuplexMode, "defaultDuplexMode(self) -> QPrinter.DuplexMode");

extern "C" {static PyObject *meth_QPrinterInfo_defaultDuplexMode(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultDuplexMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QPrinter::DuplexMode sipRes;

            sipRes = sipCpp->defaultDuplexMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QPrinter_DuplexMode);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultDuplexMode, doc_QPrinterInfo_defaultDuplexMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedDuplexModes, "supportedDuplexModes(self) -> List[QPrinter.DuplexMode]");

extern "C" {static PyObject *meth_QPrinterInfo_supportedDuplexModes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedDuplexModes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
             ::QList< ::QPrinter::DuplexMode>*sipRes;

            sipRes = new  ::QList< ::QPrinter::DuplexMode>(sipCpp->supportedDuplexModes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPrinter_DuplexMode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedDuplexModes, doc_QPrinterInfo_supportedDuplexModes);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPrinterInfo(void *, int);}
static void release_QPrinterInfo(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPrinterInfo *>(sipCppV);
}


extern "C" {static void *array_QPrinterInfo(Py_ssize_t);}
static void *array_QPrinterInfo(Py_ssize_t sipNrElem)
{
    return new  ::QPrinterInfo[sipNrElem];
}


extern "C" {static void assign_QPrinterInfo(void *, Py_ssize_t, void *);}
static void assign_QPrinterInfo(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPrinterInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPrinterInfo *>(sipSrc);
}


extern "C" {static void *copy_QPrinterInfo(const void *, Py_ssize_t);}
static void *copy_QPrinterInfo(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QPrinterInfo(reinterpret_cast<const  ::QPrinterInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPrinterInfo(sipSimpleWrapper *);}
static void dealloc_QPrinterInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPrinterInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPrinterInfo *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QPrinterInfo();

            return sipCpp;
        }
    }

    {
        const  ::QPrinterInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QPrinterInfo, &a0))
        {
            sipCpp = new  ::QPrinterInfo(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QPrinter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QPrinter, &a0))
        {
            sipCpp = new  ::QPrinterInfo(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QPrinterInfo[] = {
    {sipName_availablePrinterNames, meth_QPrinterInfo_availablePrinterNames, METH_VARARGS, doc_QPrinterInfo_availablePrinterNames},
    {sipName_availablePrinters, meth_QPrinterInfo_availablePrinters, METH_VARARGS, doc_QPrinterInfo_availablePrinters},
    {sipName_defaultDuplexMode, meth_QPrinterInfo_defaultDuplexMode, METH_VARARGS, doc_QPrinterInfo_defaultDuplexMode},
    {sipName_defaultPageSize, meth_QPrinterInfo_defaultPageSize, METH_VARARGS, doc_QPrinterInfo_defaultPageSize},
    {sipName_defaultPrinter, meth_QPrinterInfo_defaultPrinter, METH_VARARGS, doc_QPrinterInfo_defaultPrinter},
    {sipName_defaultPrinterName, meth_QPrinterInfo_defaultPrinterName, METH_VARARGS, doc_QPrinterInfo_defaultPrinterName},
    {sipName_description, meth_QPrinterInfo_description, METH_VARARGS, doc_QPrinterInfo_description},
    {sipName_isDefault, meth_QPrinterInfo_isDefault, METH_VARARGS, doc_QPrinterInfo_isDefault},
    {sipName_isNull, meth_QPrinterInfo_isNull, METH_VARARGS, doc_QPrinterInfo_isNull},
    {sipName_isRemote, meth_QPrinterInfo_isRemote, METH_VARARGS, doc_QPrinterInfo_isRemote},
    {sipName_location, meth_QPrinterInfo_location, METH_VARARGS, doc_QPrinterInfo_location},
    {sipName_makeAndModel, meth_QPrinterInfo_makeAndModel, METH_VARARGS, doc_QPrinterInfo_makeAndModel},
    {sipName_maximumPhysicalPageSize, meth_QPrinterInfo_maximumPhysicalPageSize, METH_VARARGS, doc_QPrinterInfo_maximumPhysicalPageSize},
    {sipName_minimumPhysicalPageSize, meth_QPrinterInfo_minimumPhysicalPageSize, METH_VARARGS, doc_QPrinterInfo_minimumPhysicalPageSize},
    {sipName_printerInfo, meth_QPrinterInfo_printerInfo, METH_VARARGS, doc_QPrinterInfo_printerInfo},
    {sipName_printerName, meth_QPrinterInfo_printerName, METH_VARARGS, doc_QPrinterInfo_printerName},
    {sipName_state, meth_QPrinterInfo_state, METH_VARARGS, doc_QPrinterInfo_state},
    {sipName_supportedDuplexModes, meth_QPrinterInfo_supportedDuplexModes, METH_VARARGS, doc_QPrinterInfo_supportedDuplexModes},
    {sipName_supportedPageSizes, meth_QPrinterInfo_supportedPageSizes, METH_VARARGS, doc_QPrinterInfo_supportedPageSizes},
    {sipName_supportedPaperSizes, meth_QPrinterInfo_supportedPaperSizes, METH_VARARGS, doc_QPrinterInfo_supportedPaperSizes},
    {sipName_supportedResolutions, meth_QPrinterInfo_supportedResolutions, METH_VARARGS, doc_QPrinterInfo_supportedResolutions},
    {sipName_supportedSizesWithNames, meth_QPrinterInfo_supportedSizesWithNames, METH_VARARGS, doc_QPrinterInfo_supportedSizesWithNames},
    {sipName_supportsCustomPageSizes, meth_QPrinterInfo_supportsCustomPageSizes, METH_VARARGS, doc_QPrinterInfo_supportsCustomPageSizes}
};

PyDoc_STRVAR(doc_QPrinterInfo, "\1QPrinterInfo()\n"
"QPrinterInfo(QPrinterInfo)\n"
"QPrinterInfo(QPrinter)");


static pyqt5ClassPluginDef plugin_QPrinterInfo = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtPrintSupport_QPrinterInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPrinterInfo,
        SIP_NULLPTR,
        &plugin_QPrinterInfo
    },
    {
        sipNameNr_QPrinterInfo,
        {0, 0, 1},
        23, methods_QPrinterInfo,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QPrinterInfo,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QPrinterInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QPrinterInfo,
    assign_QPrinterInfo,
    array_QPrinterInfo,
    copy_QPrinterInfo,
    release_QPrinterInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
