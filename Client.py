import sys
import time
from PyQt5.QtCore import QUrl
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtWebEngineWidgets import QWebEnginePage
# --------------------
app = QApplication(sys.argv)

class Client(QWebEnginePage):
    def __init__(self, url, cb):
        QWebEnginePage.__init__(self)
        self.html = ''
        self.loadFinished.connect(self.on_page_load)
        self.load(QUrl(url))
        self.cb = cb
        self.url = url
        app.exec_()


    def on_page_load(self):
        self.toHtml(self.Callable)
        time.sleep(6)


    def Callable(self, html_str):
        self.html = html_str
        self.cb(self.url, self.html)
        app.quit()
