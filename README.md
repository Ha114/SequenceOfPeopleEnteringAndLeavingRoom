# SequenceOfPeopleEnteringAndLeavingRoom
Task: There are n people entering and exiting a room. For each i ∈ {1, . . . , n}, person i enters at time ai and exits at time bi (assume bi > ai for all i), and all the ai , bi are distinct. At the beginning of the day, the lights in the room are switched off, and the first person who enters the room switches them on. In order to conserve electricity, if person i leaves the room at time bi and there is no one else present in the room at time bi , then person i will switch the lights off. 
The next person to enter will then switch them on again. Given the values (a1, b1),(a2, b2), . . .(an, bn), we want to find the number of times the lights get switched on.

Time complexity of this algorithm O(n^4+n)
The space complexity can be hard to predict due to changing input values, but for this current it would be 105 bytes
