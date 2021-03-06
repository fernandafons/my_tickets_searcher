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

#include "sipAPIQtWidgets.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"


extern "C" {static long slot_QGraphicsScene_SceneLayers___hash__(PyObject *);}
static long slot_QGraphicsScene_SceneLayers___hash__(PyObject *sipSelf)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QGraphicsScene::SceneLayers::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *);}
static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *sipSelf)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != a0->operator QGraphicsScene::SceneLayers::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast< ::QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QGraphicsScene_SceneLayers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() == a0->operator QGraphicsScene::SceneLayers::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast< ::QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QGraphicsScene_SceneLayers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsScene::SceneLayers(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
             ::QGraphicsScene::SceneLayers*sipRes;

            sipRes = new  ::QGraphicsScene::SceneLayers((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsScene::SceneLayers(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
             ::QGraphicsScene::SceneLayers*sipRes;

            sipRes = new  ::QGraphicsScene::SceneLayers((*a0 | a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QGraphicsScene::SceneLayers::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
             ::QGraphicsScene::SceneLayers*sipRes;

            sipRes = new  ::QGraphicsScene::SceneLayers((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *sipSelf)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QGraphicsScene::SceneLayers*sipRes;

            sipRes = new  ::QGraphicsScene::SceneLayers(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *sipSelf)
{
     ::QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return PyLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsScene_SceneLayers(void *, int);}
static void release_QGraphicsScene_SceneLayers(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipCppV);
}


extern "C" {static void *array_QGraphicsScene_SceneLayers(Py_ssize_t);}
static void *array_QGraphicsScene_SceneLayers(Py_ssize_t sipNrElem)
{
    return new  ::QGraphicsScene::SceneLayers[sipNrElem];
}


extern "C" {static void assign_QGraphicsScene_SceneLayers(void *, Py_ssize_t, void *);}
static void assign_QGraphicsScene_SceneLayers(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGraphicsScene::SceneLayers *>(sipSrc);
}


extern "C" {static void *copy_QGraphicsScene_SceneLayers(const void *, Py_ssize_t);}
static void *copy_QGraphicsScene_SceneLayers(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QGraphicsScene::SceneLayers(reinterpret_cast<const  ::QGraphicsScene::SceneLayers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *);}
static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsScene_SceneLayers(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGraphicsScene::SceneLayers *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QGraphicsScene::SceneLayers();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QGraphicsScene::SceneLayers(a0);

            return sipCpp;
        }
    }

    {
        const  ::QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            sipCpp = new  ::QGraphicsScene::SceneLayers(*a0);
            sipReleaseType(const_cast< ::QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QGraphicsScene_SceneLayers(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsScene_SceneLayers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QGraphicsScene::SceneLayers **sipCppPtr = reinterpret_cast< ::QGraphicsScene::SceneLayers **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsScene::SceneLayers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)))
{
    *sipCppPtr = new QGraphicsScene::SceneLayers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsScene_SceneLayers[] = {
    {(void *)slot_QGraphicsScene_SceneLayers___hash__, hash_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___bool__, bool_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ne__, ne_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___eq__, eq_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ixor__, ixor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___xor__, xor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ior__, ior_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___or__, or_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___iand__, iand_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___and__, and_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___invert__, invert_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsScene_SceneLayers, "\1QGraphicsScene.SceneLayers()\n"
"QGraphicsScene.SceneLayers(Union[QGraphicsScene.SceneLayers, QGraphicsScene.SceneLayer])\n"
"QGraphicsScene.SceneLayers(QGraphicsScene.SceneLayers)");


static pyqt5ClassPluginDef plugin_QGraphicsScene_SceneLayers = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsScene_SceneLayers = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsScene__SceneLayers,
        SIP_NULLPTR,
        &plugin_QGraphicsScene_SceneLayers
    },
    {
        sipNameNr_SceneLayers,
        {144, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QGraphicsScene_SceneLayers,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QGraphicsScene_SceneLayers,
    init_type_QGraphicsScene_SceneLayers,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QGraphicsScene_SceneLayers,
    assign_QGraphicsScene_SceneLayers,
    array_QGraphicsScene_SceneLayers,
    copy_QGraphicsScene_SceneLayers,
    release_QGraphicsScene_SceneLayers,
    SIP_NULLPTR,
    convertTo_QGraphicsScene_SceneLayers,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
