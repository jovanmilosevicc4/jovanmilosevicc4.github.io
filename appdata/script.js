// ===== SMOOTH SCROLL =====
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        const target = document.querySelector(this.getAttribute('href'));
        if (target) {
            target.scrollIntoView({
                behavior: 'smooth',
                block: 'start'
            });
        }
    });
});

// ===== ACCORDION (za C++ zadatke) =====
document.querySelectorAll('.section-header').forEach(btn => {
    btn.addEventListener('click', () => {
        const section = btn.parentElement;
        section.classList.toggle('collapsed');
    });
});

// ===== PRETRAGA ZADATAKA =====
const searchInput = document.getElementById('taskSearch');
if (searchInput) {
    searchInput.addEventListener('input', () => {
        const query = searchInput.value.trim().toLowerCase();

        document.querySelectorAll('.task-section').forEach(section => {
            let anyVisible = false;

            section.querySelectorAll('.task').forEach(card => {
                const text = (card.innerText + ' ' + (card.dataset.tags || '') + ' ' + (section.dataset.title || '')).toLowerCase();
                const isMatch = query === '' || text.includes(query);

                card.style.display = isMatch ? '' : 'none';
                if (isMatch) anyVisible = true;
            });

            section.style.display = anyVisible ? '' : 'none';

            // Automatski otvori sekciju kad se pretražuje
            if (query && section.classList.contains('collapsed')) {
                section.classList.remove('collapsed');
            }
        });
    });
}

// ===== MODALI (za slike dokaza) =====
function openModal(modalId) {
    const modal = document.getElementById(modalId);
    if (modal) {
        modal.style.display = 'block';
        document.body.style.overflow = 'hidden';
    }
}

function closeModal(modalId) {
    const modal = document.getElementById(modalId);
    if (modal) {
        modal.style.display = 'none';
        document.body.style.overflow = 'auto';
    }
}

// Zatvori modal klikom na pozadinu
window.addEventListener('click', (e) => {
    if (e.target.classList.contains('modal')) {
        e.target.style.display = 'none';
        document.body.style.overflow = 'auto';
    }
});

// Zatvori modal sa ESC tasterom
window.addEventListener('keydown', (e) => {
    if (e.key === 'Escape') {
        document.querySelectorAll('.modal').forEach(modal => {
            if (modal.style.display === 'block') {
                modal.style.display = 'none';
                document.body.style.overflow = 'auto';
            }
        });
    }
});

// ===== FADE IN ANIMACIJE =====
const observerOptions = {
    threshold: 0.1,
    rootMargin: '0px 0px -100px 0px'
};

const observer = new IntersectionObserver((entries) => {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.style.opacity = '1';
            entry.target.style.transform = 'translateY(0)';
        }
    });
}, observerOptions);

document.querySelectorAll('.card, .intro-text').forEach(el => {
    el.style.opacity = '0';
    el.style.transform = 'translateY(30px)';
    el.style.transition = 'opacity 0.6s ease, transform 0.6s ease';
    observer.observe(el);
});

// ===== PARALLAX HERO =====
window.addEventListener('scroll', () => {
    const scrolled = window.pageYOffset;
    const hero = document.querySelector('.hero');
    if (hero) {
        hero.style.transform = `translateY(${scrolled * 0.5}px)`;
    }
});