// Challenge 319 https://www.reddit.com/r/dailyprogrammer/comments/6h9woe/20160614_challenge_319_intermediate_worm_wars_1/

var sToIRate, iToRRate, sToRRate = 0.0;

function run(sPopulation, iPopulation, siRate, irRate, srRate) {
	sToIRate = siRate;
	iToRRate = irRate;
	sToRRate = srRate;
	var populations = {
		s: sPopulation,
		i: iPopulation,
		r: 0,
		stop: false
	};
	printOutput(populations);
	while (!populations.stop) {
		populations = iterate(populations.s, populations.i, populations.r);
	}
};

function iterate(sPop, iPop, rPop) {
	var sToI, iToR, sToR = 0;

	iToR = Math.round(iPop * iToRRate);
	iPop -= iToR;
	rPop += iToR;

	sToI = Math.round(sPop * sToIRate);
	sPop -= sToI;
	iPop += sToI;

	sToR = Math.round(sPop * sToRRate);
	sPop -= sToR;
	rPop += sToR;

	var populations = {
		s: sPop,
		i: iPop,
		r: rPop,
		stop: !sToI && !sToR && !iToR
	};
	printOutput(populations);
	return populations;
};

function printOutput(populations) {
	console.log("S: " + populations.s + " I: " + populations.i + " R: " + populations.r);
};