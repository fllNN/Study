import QtQuick

Window {
    id: root
    color: "#313438"
    width: 700
    height: 450
    visible: true
    title: qsTr("Animation")

    Rectangle {
        id: square
        width: 100
        height: 100
        radius: 15
        color: "skyblue"
        x: root.width / 2 - square.width / 2
        y: root.height / 2 - square.height / 2

        NumberAnimation on x {
            from: 0
            to: root.width - square.width
            duration: 1500
            loops: Animation.Infinite
            easing.type: Easing.CosineCurve
        }
    }
}
