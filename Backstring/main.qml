import QtQuick
import QtQuick.Controls


Window {
    width: 700
    height: 450
    visible: true
    color: "#313438"
    title: qsTr("Backstring")

    signal funcSignal(string msg)

    Button {
        id: button
        width: 100
        height: 50
        font.pixelSize: 20
        text: "Flip"
        anchors.centerIn: parent
        x: parent.width / 2 - button.width / 2;
        y: parent.height / 2 - button.height / 2;
        onClicked: funcSignal("")

        Rectangle {
            id: textinputRect
            width: 100
            height: 19
            radius: 1
            color: "white"
            x: parent.width / 2 - button.width / 2;
            y: parent.height / 2 - button.height / 2+55;

            TextInput {
                id: textinput
                objectName: "textinput"
                color: "#151515"
                selectionColor: "blue"
                font.pixelSize: 12
                width: parent.width-4
                anchors.centerIn: parent
                focus: true
            }
        }

        Rectangle {
            id: memoRect
            width: 100
            height: 19
            radius: 1
            color: "white"
            x: parent.width / 2 - button.width / 2;
            y: parent.height / 2 - button.height / 2+80;

            TextEdit{
                id: memo
                objectName: "memo"
                wrapMode: TextEdit.Wrap
                width: parent.width;
                readOnly: true
            }
        }
    }
}
