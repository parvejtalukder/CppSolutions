'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function weekdayText(weekdays, value) {
    if (value < 0 || value >= weekdays.length) {
        return "Invalid weekday index";
    }
    return weekdays[value];
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
    const weekdays = readLine().trim().split(' ');
    const index = parseInt(readLine().trim());

    try {
        const result = weekdayText(weekdays, index);
        ws.write(result + '\n');
    } catch (e) {
        ws.write(`${e.message}\n`);
    }

    ws.end();
}