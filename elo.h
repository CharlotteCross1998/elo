#ifndef ELO_H_INCLUDED
#define ELO_H_INCLUDED

namespace elo
{
	template <typename type>
	double calcElo(type score, type baselineScore)
	{
		return (1.0 / (1.0-10.0*(score - baselineScore) / 4000.0) * 1000);
	}

	template <typename type>
	double calcElo(type score, type baselineScore, type baselineElo)
	{
		return (1.0 / (1.0-10.0*(score - baselineScore) / baselineElo) * 1000);
	}
}

#endif
